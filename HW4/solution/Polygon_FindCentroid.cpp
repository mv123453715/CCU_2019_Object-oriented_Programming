#include <bits/stdc++.h>
#include "Polygon.h"
using namespace std;


//GetSize : 整數，傳回邊長
double* Polygon::FindCentroid ()const{
    //cout << "_m:" <<_m ;
    //cout << "_n:" <<_n ;
    double *result = new double[_n]; 
    for ( int i = 0; i <_n ; ++i ){
        for ( int j = 0; j <_m ; ++j ){
            result[i] +=_point[j][i];
        }//for
        result[i] /= _m;
    }//for
    
    return result;
}//void
