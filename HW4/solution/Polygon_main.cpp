#include <bits/stdc++.h>
#include "Polygon.h"

using namespace std;
int main() {
  Polygon p(3, 4);
  
  double k = 0;
  for (int i=0; i<p.getNumOfPoints(); i++)
    for (int j=0; j<p.getDimension(); j++) {
      k += 1;
    p.setValue(k, i, j);
  }
  PrintPoints(p);
  double* centroid = p.FindCentroid();
  for (int n=0; n<p.getDimension(); n++)
    cout << centroid[n] << " ";
  cout << endl;
  return 0;
}