#ifndef Polygon_h
#define Polygon_h

#include <bits/stdc++.h>
using namespace std;
class Polygon {
    private:
        unsigned int _m; // the number of points
        unsigned int _n; // the dimension of every point
        double** _point; // point[i]: the i-th point
        // point[i][j]: the j-th coordinate of i-point


    public:
        // default constructor
        // m is the number of points
        // n is the dimension of the points
        Polygon (unsigned int m = 0, unsigned int n = 0):_m(m),_n(n){
            cout << "default constructor" << endl;
            //cout << "_m:"<<_m <<endl;
            //cout << "_n:"<<_n <<endl;
            _point = new double*[_m];
            for ( int i = 0; i < _m ;i++ )
                _point[i] = new double[_n];
        // �K
        }//Polygon
    
        Polygon (const Polygon& mt) {
            cout << "copy constructor" << endl; 
            _m = mt._m;
            _n = mt._n;
            _point = mt._point;
        }// copy constructor
        
        
        ~Polygon (){
            cout << "destructor" << endl;
        }  // destructor
        double* FindCentroid() const; // ���X�h��Ϊ��u���ߡv�y��
        const int getNumOfPoints() const { return _m; };
        const int getDimension() const { return _n; };
        const double  getValue (unsigned int m, unsigned int n)const; //���o�� m ���I���� n ������
        bool setValue (double & value, unsigned int m, unsigned int n);//�]�w�� m ���I���� n ������
};//Polygon

void  PrintPoints(Polygon p) ; 
#endif /* Polygon_h*/