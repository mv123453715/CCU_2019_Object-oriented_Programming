#include <bits/stdc++.h>
#include "Polynomial.h"

using namespace std;
int main() {
  CoefType coef[10] = {9,5,7,8,8,0,1,5,-9,-5}; // to may not be sorted and may be repeated. maybe minus
  int exp[10] = {0,1,5,9,5,9,5,7,8,8}; // to may not be sorted and may be repeated
  Polynomial p(coef,exp,10);
  p.add(5,10);
  p.add(5,8);
  p.add(9,8);
  p.differentiate();
  p.add(4,8);
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.add(5,5);
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.differentiate();
  p.add(5,5);
  
  return 0;
}