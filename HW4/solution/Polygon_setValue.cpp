#include <bits/stdc++.h>
#include "Polygon.h"
using namespace std;

bool Polygon::setValue (double & value, unsigned int m, unsigned int n) {
    if (m>=0 && m<_m && n>=0 && n<_n) {
        _point[m][n] = value;
        return true;
    }//if
    else
      return false;
}//setValue