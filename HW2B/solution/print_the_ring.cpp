#include "refs.h"
#include <bits/stdc++.h>
using namespace std;
//print_the_ring


void print_the_ring(const RingNode* head, int size) {
    for (int i=0; i<size; i++) {
      cout << head->value << endl;
      head = head->next;
    }//for
}//print_the_ring