#ifndef Bigint_h
#define Bigint_h

#include <bits/stdc++.h>
using namespace std;


class bigint{
    private:
      string s;
      int A[5];
      
      
    public:
      string add_zero( string &s ){
          int len = s.length();
          for ( int i = len ; i <9 ;i++ )
              s = "0" + s;
          return s;
      }//add_zero
    
      
      
      bigint(){
          s = "0";
          A[0] = 0;
      } //default constructor - set this to zero
      
      
      bigint( const bigint& b ){
          s = b.s;
          for ( int i = 0;i <5;i++ )
              A[i] = b.A[i];
      }// copy constructor
      
      
      
      bigint(int x0){
          s = to_string( x0 );
          A[0] = x0;
          A[1] = 0;
          A[2] = 0;
          A[3] = 0;
          A[4] = 0;
          
      }//bigint
      bigint(int x0, int x1){
          A[0] = x0;
          A[1] = x1;
          A[2] = 0;
          A[3] = 0;
          A[4] = 0;
          
          string s0 = to_string( x0 );
          s0 = add_zero( s0 );
          string s1 = to_string( x1 );
          s =s1+s0;
      }//bigint
      
      bigint(int x0, int x1, int x2){
          A[0] = x0;
          A[1] = x1;
          A[2] = x2;
          A[3] = 0;
          A[4] = 0;
          
          string s0 = to_string( x0 );
          s0 = add_zero( s0 );
          string s1 = to_string( x1 );
          s1 = add_zero( s1 );
          string s2 = to_string( x2 );
          
          s = s2+s1+s0;
      }//bigint
      
      
      bigint(int x0, int x1, int x2, int x3){
          //cout << "constructor\n";
          A[0] = x0;
          A[1] = x1;
          A[2] = x2;
          A[3] = x3;
          A[4] = 0;
          
          
          string s0 = to_string( x0 );
          s0 = add_zero( s0 );
          string s1 = to_string( x1 );
          s1 = add_zero( s1 );
          string s2 = to_string( x2 );
          s2 = add_zero( s2 );
          string s3 = to_string( x3 );
          
          s = s3+s2+s1+s0;
      }//bigint
      
      
      
      bigint(int x0, int x1, int x2, int x3, int x4){
          A[0] = x0;
          A[1] = x1;
          A[2] = x2;
          A[3] = x3;
          A[4] = x4;
          string s0 = to_string( x0 );
          s0 = add_zero( s0 );
          string s1 = to_string( x1 );
          s1 = add_zero( s1 );
          string s2 = to_string( x2 );
          s2 = add_zero( s2 );
          string s3 = to_string( x3 );
          s3 = add_zero( s3 );
          string s4 = to_string( x4 );
          
          s = s4+s3+s2+s1+s0;
      }//bigint
    
      ~bigint(){};
      
      // I/O 
      friend istream &operator>>( istream & in , bigint& b){
          in >> b.s;
          return in;
      }//istream
      friend ostream & operator<<( ostream & out , const bigint& b ){
          out << b.s;
          return out;   
      }//ostream
      bigint operator -(const bigint &rs);
      bigint operator +(const bigint &rs);
      bool operator >(const bigint &rs)const;
      bool operator <(const bigint &rs)const;
      bool operator >=(const bigint &rs)const;     
      bool operator <=(const bigint &rs)const;
      bool operator ==(const bigint &rs)const;      
      bool operator !=(const bigint &rs)const;      
      
      



      
          



};//bigint

#endif /* Bigint_h*/