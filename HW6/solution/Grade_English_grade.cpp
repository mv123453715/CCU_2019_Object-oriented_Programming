#include <bits/stdc++.h>
#include "Grade.h"
using namespace std;

const void English::grade(){
            _gra =  double( _Attend ) *0.1 +  double( _Pro + _Mid+_Final ) *0.3;
        }//grade