#include "refs.h"
#include <bits/stdc++.h>
using namespace std;


void delete_RingNode(RingNode*& head, int size){
    cout << "RingNode origianl size : "<<size <<endl;
    int delete_num = 0;
    for (int i=0; i<size; i++) {
        if ( head->next !=NULL ){
            RingNode *current = head;
            head = head->next;
            free( current );
            delete_num++;
        }//if
        else{
            free(head);
            delete_num++;
        }//else
    }//for
    cout << "delete_RingNode size : "<<delete_num <<endl;
  
}//delete_RingNode