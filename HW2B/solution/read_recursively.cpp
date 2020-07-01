#include "refs.h"
#include <bits/stdc++.h>
using namespace std;


//read_recursively
int read_recursively (fstream& file, RingNode*& current,RingNode*& head,int &size){
     char c; 
     if ( !file.eof() ){
         file.get(c);
         
         //if c is \0  file.close() and  current->next = head ,so we can get RingNode
         if ( c == '\0' ){ 
            file.close();
            current->next = head;
            current = head;
            return size; 
         }//if
         
         //if c is not  \0 and current == NULL,current value is c and pointer current store to head;
         //recursively call create RingNode
         else if ( current == NULL ){ 
             current = new RingNode();
             current ->value= c;
             head = current;
             size++;
             read_recursively (file, current,head,size);
         }//else if
         
         //if c is not  \0 and current != NULL,create new RingNode() 
         //recursively call create RingNode
         else {
             RingNode* ptr1 = new RingNode();
             ptr1->value = c;
             current->next = ptr1;
             current = current->next;
             size++;
             read_recursively (file, current,head,size);
             return size;    
         }//else
     }//if
}//read_recursively