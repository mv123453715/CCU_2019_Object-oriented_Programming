#include <bits/stdc++.h>
#include "Polygon.h"
using namespace std;


//GetSize : 整數，傳回邊長
const double Polygon:: getValue (unsigned int m, unsigned int n)const {
    if (m<0 || m>= _m || n<0 || n>= _n) {
        cerr << "ERROR: Index our of range" << endl;
        exit(-1);
    }//if
    else {
        //cout << "_point[m][n]:" << _point[m][n] <<endl;
        return _point[m][n];
    }//else
}//getValue
