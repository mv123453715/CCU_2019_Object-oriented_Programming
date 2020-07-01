#include <bits/stdc++.h>
#include "Grade.h"
using namespace std;

char LetterGrade ( double &g ){
    if( g>=90 && g<100)
        return 'A';
    else if( g>=80 && g<90)
        return 'B';
    else if( g>=70 && g<80)
        return 'C';
    else if( g>=60 && g<70)
        return 'D';
    return 'F';
    
}//Letterg