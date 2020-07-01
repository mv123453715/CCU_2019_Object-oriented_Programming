#include <iostream>
#include "bigint.h"
using namespace std;
bigint bigint::operator -(const bigint &rs){
    //nagetive  become zero 
    bigint res;
    if ( ( s.length()<rs.s.length() )|| (s.length()==rs.s.length()&&s <= rs.s) ){
        res.s = "0";
        fill( res.A,res.A+4,0 );
    }//if
    // positive
    else{
        int len1 = s.length();
        int len2 = rs.s.length();
        int max_len = max( len1,len2 );
        //cout <<"max_len:" << max_len<<endl;
        bigint left;
        left.s = s;
        for (int i = 0; i<5;i++)
            left.A[i] = A[i];
        bigint right = rs;
        
        //smaller number add zero 
        for( int i = len1;i<max_len;i++ )
            left.s = "0"+left.s;
        for( int i = len2;i<max_len;i++ )
            right.s = "0"+right.s;
            
        res.s = left.s;
        for( int i = max_len-1; i >=0 ;i-- ){
            if ( left.s[i] >= right.s[i] )
                res.s[i] = left.s[i] - right.s[i] +'0';
            else {
                res.s[i] = left.s[i] - right.s[i]+10+'0';
                //cout <<"res.s["<<i<<"]:"<<res.s[i]<<endl;
                left.s[i-1]--;//borrow
            }//else 
        }//for
        
        while (res.s.length() > 1 && res.s[0] == '0')
			      res.s.erase(res.s.begin());//移除第一個0
        
        //cout << res.s <<endl;
        int new_len =  res.s.length();  
        if ( new_len <=9 ){
            res.A[0] = stoi(res.s);
            res.A[1] = 0;
            res.A[2] = 0;
            res.A[3] = 0;
            res.A[4] = 0;
        }//if
        else if ( new_len >9 &&new_len <=18   ){
            res.A[0] = stoi(res.s.substr( new_len-8,9 ));
            res.A[1] = stoi(res.s.substr( 0,new_len-9 ));
            res.A[2] = 0;
            res.A[3] = 0;
            res.A[4] = 0;
        }//if
        else if ( new_len >18 &&new_len <=27   ){
            res.A[0] = stoi(res.s.substr( new_len-8,9 ));
            res.A[1] = stoi(res.s.substr( new_len-17,9 ));
            res.A[2] = stoi(res.s.substr( 0,new_len-18 ));
            res.A[3] = 0;
            res.A[4] = 0;
        }//if
        else if ( new_len >27 &&new_len <=36   ){
            res.A[0] = stoi(res.s.substr( new_len-8,9 ));
            res.A[1] = stoi(res.s.substr( new_len-17,9 ));
            res.A[2] = stoi(res.s.substr( new_len-26,9 ));
            res.A[3] = stoi(res.s.substr( 0,new_len-27 ));
            res.A[4] = 0;
        }//if
        else if ( new_len >36 &&new_len <=45   ){
            res.A[0] = stoi(res.s.substr( new_len-8,9 ));
            res.A[1] = stoi(res.s.substr( new_len-17,9 ));
            res.A[2] = stoi(res.s.substr( new_len-26,9 ));
            res.A[3] = stoi(res.s.substr( new_len-35,9 ));
            res.A[4] = stoi(res.s.substr( 0,new_len-36 ));
        }//if
    
   }//else
   return res;
}//-