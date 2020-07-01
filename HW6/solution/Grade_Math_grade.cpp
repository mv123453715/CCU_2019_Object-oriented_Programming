#include <bits/stdc++.h>
#include "Grade.h"
using namespace std;

const void Math::grade(){
            _gra=double( _Q1+_Q2+_Q3+_Q4+_Q5 ) *0.03 +  double( _T1+_T2) *0.25 + double( _Final) *0.35;
        }//grade