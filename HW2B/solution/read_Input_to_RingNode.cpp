#include "refs.h"
#include <bits/stdc++.h>
using namespace std;

int read_Input_to_RingNode(char filename[], RingNode*& current){
    //open file
    fstream  file; 
    file.open (filename , ios::in);
    //error handle
    if (!file) {
         cout << "Error! opening file isn't exist!\n";
         exit(0);
    }//if
    
    //initialization 
    int size = 0;
    RingNode *head = new RingNode();
    //read_recursively create RingNode
    size = read_recursively (file, current,head,size);
    return size;
}//read_Input