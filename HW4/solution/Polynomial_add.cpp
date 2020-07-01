#include <bits/stdc++.h>
#include "Polynomial.h"

using namespace std;
void Polynomial::add (const CoefType c, const  int e){
    cout << "add :"<<c<<"x^"<<e<<endl;
    if ( head == NULL or head->next == NULL  ){
        cout << "Polynomial is null don't add ! ";
    }//if
    
    else {
        NodePointer now = new Node;
        NodePointer pre = new Node;
        now = head->next;
        pre = now;
        
        
        if ( now->next == NULL ){      
            NodePointer newnode = new Node;
            newnode->data.expo = e;
            newnode->data.coef = c;
            now->next = newnode;
            newnode->next = NULL;
        }//if
        
        else if ( c != 0 ){ //c=0 don't work
          while ( now -> next != NULL ){
              now = now->next;
              if ( now->data.expo == e ){
                  now->data.coef += c;
                  
                  if ( now->data.coef == 0 ){//delete now
                      pre->next = now->next;
                      delete( now );
                      cout << "because x^" << e << " coff is zero ,so delete x^" << e <<endl;
                  }//if
                  break;
              }//if
              else if ( now->data.expo < e ){
                  NodePointer newnode = new Node;
                  newnode->data.expo = e;
                  newnode->data.coef = c;
                  pre->next = newnode;
                  newnode->next = now;
                  break;
              }//else if
              pre = now;
          }//while
        }//else if
    }//else
    
    PrintPolynomial();
}//add