#include <iostream>
#include "bigint.h"
using namespace std;

bool bigint::operator ==(const bigint &rs)const{
    return s == rs.s;
}//==

bool bigint::operator !=(const bigint &rs)const{
    return s != rs.s;
}//!=

bool bigint::operator >=(const bigint &rs)const{
    if ( (s.length()>rs.s.length()) || (s.length()==rs.s.length()&&s >= rs.s))
        return true;
    else 
        return false;
}//>=

bool bigint::operator <=(const bigint &rs)const{
    if ( (s.length()<rs.s.length()) || (s.length()==rs.s.length()&&s <= rs.s))
        return true;
    else 
        return false;
}//<=

bool bigint::operator >(const bigint &rs)const{
    if ( (s.length()>rs.s.length()) || (s.length()==rs.s.length()&&s > rs.s))
        return true;
    else 
        return false;
}//>

bool bigint::operator <(const bigint &rs)const{
    if ( (s.length()<rs.s.length()) || (s.length()==rs.s.length()&&s < rs.s))
        return true;
    else 
        return false;
}//<