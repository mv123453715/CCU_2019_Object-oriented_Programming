
#ifndef Avgs_h
#define Avgs_h
#include <bits/stdc++.h>
using namespace std;
void Avgs( vector<int> &A ,float &avg_all,float &avg_pos,float &avg_nega){
    int i = 0,pos_count = 0,nega_count = 0;
    
    //compute total,total_pos,total_nega
    for ( i = 0;i<A.size();i++){
        avg_all = avg_all + A.at(i);
        if ( A.at(i) > 0 ){
            pos_count++;
            avg_pos = avg_pos + A.at(i);
        }//if
        else if ( A.at(i) < 0  ){
            nega_count++;
            avg_nega = avg_nega + A.at(i);        
        }//else if 
    }//for
    
    //compute avg_all,avg_pos,avg_nega
    avg_all /=float(A.size());
    avg_pos /=float(pos_count);
    avg_nega/=float(nega_count);


}//Avgs
#endif /* Avgs_h */