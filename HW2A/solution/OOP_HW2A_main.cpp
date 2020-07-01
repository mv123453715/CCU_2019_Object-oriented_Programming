//#include <iostream>
//#include <stdio.h>
//#include <string.h>
#include <bits/stdc++.h>
#include "ReadList.h"
#include "Avgs.h"
#include "Large.h"
#include "Display.h"
using namespace std;




int main (int argc, char *argv[]) {
    int i;
    vector<int> A;
    float avg_all,avg_pos,avg_nega,large_num;
    
    if ( argv[1] == NULL ){
        cout << "Error! please enter ./a.out + \"FILENAME\"\n";
        exit(0);
    }//if
    
    //fgets read input into A
    ReadList( argv[1],A);  
    //compute Average of interger ,Average of positive integer,Average of negative integer
    Avgs( A ,avg_all,avg_pos,avg_nega);
    //find Large of interger
    large_num = Large( A);
    //Display Average of interger ,Average of positive integer,Average of negative integer,Large of interger
    Display( A,avg_all,avg_pos,avg_nega,large_num);
    
    return 0;
}//main()














