#include <bits/stdc++.h>
#include "refs.h"
using namespace std;



int main (int argc, char *argv[]) {
    RingNode* start_point = NULL;
    
    int size = read_Input_to_RingNode(argv[1], start_point);
    print_the_ring(start_point, size);
    delete_RingNode(start_point, size);
    return 0;
}//main()