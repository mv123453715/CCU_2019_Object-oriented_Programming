#include <bits/stdc++.h>
#include "Polygon.h"
using namespace std;


//GetSize : ��ơA�Ǧ^���
void  PrintPoints (Polygon p) {
    //cout << "PrintPoints start\n";
    //cout << "p.getDimension(): " << p.getDimension()<<endl;
    //cout << "p.getNumOfPoints(): " << p.getNumOfPoints()<<endl;
    for (unsigned int i=0; i<p.getNumOfPoints(); i++) {
        for (unsigned int j=0; j<p.getDimension(); j++)
            cout << p.getValue(i, j) << " ";
        cout << endl;
    }//for
};//void
