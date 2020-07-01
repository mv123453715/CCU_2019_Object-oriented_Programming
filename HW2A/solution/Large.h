
#ifndef Large_h
#define Large_h
#include <bits/stdc++.h>
using namespace std;
int Large( vector<int> &A){
    int Large_num,i;
    Large_num = A.at(0);
    
    //find Large num
    for (i = 1; i<A.size();i++){
        if ( A.at(i) >Large_num )
            Large_num = A.at(i);
    }//for
    return Large_num;
}//Large

#endif /* Large_h */