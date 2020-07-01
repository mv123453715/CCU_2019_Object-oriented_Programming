
#ifndef Display_h
#define Display_h
#include <bits/stdc++.h>
using namespace std;
void Display( vector<int> &A,float avg_all,float avg_pos,float avg_nega,float large_num){
    int i;
    cout << "A array : ";
    for ( i = 0 ; i<A.size();i++ )
        cout << A.at(i) << " ";
    cout << endl;
    cout<< "Average of interger        :" << avg_all<<endl;
    cout<< "Average of positive integer:" << avg_pos<<endl;
    cout<< "Average of negative integer:" << avg_nega<<endl;
    cout<< "Large   of interger        :" << large_num<<endl;
}//display

#endif /* Display_h */