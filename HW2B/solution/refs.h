#ifndef refs_h
#define refs_h
#include <bits/stdc++.h>
using namespace std;
//class RingNode
class RingNode { 
    public:
      char value;// value stored in the node
      RingNode* next;// pointer to the next RingNode
};

void print_the_ring(const RingNode* head, int size);
int read_recursively (fstream& file, RingNode*& current,RingNode*& head,int &size);
int read_Input_to_RingNode(char filename[], RingNode*& current);
void delete_RingNode(RingNode*& head, int size);

#endif /* refs_h */