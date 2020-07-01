#include <bits/stdc++.h>
#include "Polynomial.h"

using namespace std;
const void Polynomial::PrintPolynomial() const{ 
    if ( head == NULL or head->next == NULL or head->next->next == NULL ){
        cout << "Polynomial is null !"<<endl<<endl;
    }//if
    else{
        cout << "Polynomial now is :";
        NodePointer now = new Node;
        now = head->next;
        
        while ( now->next !=NULL ){
            now = now->next;
            cout <<  now->data.coef << "x^" << now->data.expo ;
            if ( now->next !=NULL )
                cout << " + " ;
        }//while
        cout<<endl<<endl;
    }//else
}//PrintPolynomial 