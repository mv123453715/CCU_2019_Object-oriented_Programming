#ifndef Polynomial_h
#define Polynomial_h

#include <bits/stdc++.h>
using namespace std;

#define NodePointer Node*
typedef int CoefType;
    // term in a polynomial

class Term {
    public:
        CoefType coef;
        int expo;
};

// node in a linked list
class Node {
    private:
        Term data;
        NodePointer next; // Node* next
    public:
        // node constructor
        
        Node (CoefType co = 0, int ex = 0, Node * ptr = NULL) {
        //cout << "Node default constructor" << endl;
        data.coef = co;
        data.expo = ex;
        next = ptr; 
        //cout << "Node default constructor is OK" << endl;
        }
    
        
        ~Node(){
            //cout << "Node destructor" << endl;
        }  // destructor
    friend class Polynomial; 
};

// polynomial ADT
bool Term_compare( const Term& a,const Term& b );
class Polynomial {
    private:
        NodePointer head; // Node* head pointing to the first dummy node
    public:
        Polynomial (CoefType* c = NULL, int* e = NULL, int num = 0){// constructor
            cout << "Polynomial default constructor" << endl;
            cout << "coef array is :[";
            for ( int i = 0 ;i<num ;i++ )
                cout << c[i] << " ";
            cout << "]\n";
            cout << "expo array is :[";
            for ( int i = 0 ;i<num ;i++ )
                cout << e[i] << " ";
            cout << "]\n";
            
            
            
            
            //create Term
            Term *term = new Term [num];
            for ( int i = num ;i>=0 ;i--){
                term[i].coef = c[i];
                term[i].expo = e[i];
            }//for
            
            //sort
            sort( term,term+num,Term_compare );
            
            cout << "After Sort \n";
            cout << "coef array is :[";
            for ( int i = 0 ;i<num ;i++ )
                cout << term[i].coef << " ";
            cout << "]\n";
            cout << "expo array is :[";
            for ( int i = 0 ;i<num ;i++ )
                cout << term[i].expo << " ";
            cout << "]\n";
            
            
            //first is dummy
            
            
            NodePointer newnode = new Node;
            head = new Node;
            head  ->next = newnode;
        
            //Descending order pointer
            for ( int i = num-1 ;i>=0 ;i--){
                if ( term[i].coef == 0 )//  coeff is zero , continue
                    continue;
                else{
                    bool find_repeat = false;
                    NodePointer now = new Node;
                    now = head->next;
                    while ( now -> next != NULL ){
                        now = now->next;
                        if ( now->data.expo == term[i].expo ){
                            now->data.coef += term[i].coef;
                            find_repeat = true;
                            break;
                        }//if
                        
                    }//while
                    
                    
                    if ( find_repeat == false ){ // new NodePointer
                        NodePointer newnode2 = new Node;
                        newnode2->data.expo = term[i].expo;
                        newnode2->data.coef = term[i].coef;
                        now->next = newnode2;
                    }//if
                }//else
            }//for
        
            PrintPolynomial();
        }//Polynomial
        
        // destructor
        ~Polynomial(){
            cout << "Polynomial destructor" << endl;
            NodePointer pre = head;
            while ( head -> next != NULL ){
                
                head = head->next;
                delete(pre);
                pre = head;
            }//while
            delete(head);
            
        }  // destructor
        // add a term into the polynomial
        void add (const CoefType c, const  int e);
        
        // differentiation
        void differentiate();
        const void PrintPolynomial() const;
};//Polynomial



#endif /* Polynomial_h*/