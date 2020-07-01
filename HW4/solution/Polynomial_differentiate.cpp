#include <bits/stdc++.h>
#include "Polynomial.h"

using namespace std;
void Polynomial::differentiate(){
    cout << "differentiate()"<<endl;
    if ( head == NULL or head->next == NULL or head->next->next == NULL ){
        cout << "Polynomial is null don't differentiate !"<<endl;
    }//if
    else{
        NodePointer now = new Node;
        NodePointer pre = new Node;
        now = head->next;
        pre = now;
        while ( now->next !=NULL ){
            now = now->next;
            
            if ( now->data.expo == 0 ){//constant
                pre->next = now->next;
                delete(now);
                break;
            }//if 
            now->data.coef *= now->data.expo;
            now->data.expo -=1;
            
            
            pre = now;
        }//while
        PrintPolynomial(); 
    }//else
    
}//differentiate