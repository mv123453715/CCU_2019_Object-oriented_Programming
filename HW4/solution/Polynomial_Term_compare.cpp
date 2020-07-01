#include <bits/stdc++.h>
#include "Polynomial.h"

using namespace std;
bool Term_compare( const Term& a,const Term& b ){
    if ( a.expo < b.expo )
        return true;
    else
        return false;
}//Term_compare