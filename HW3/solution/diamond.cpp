#include <bits/stdc++.h>
#include "diamond.h"
using namespace std;


//GetSize : 整數，傳回邊長
const int Diamond::GetSize( void ) const{ 
    return  nuit_num ;
} //GetSize

//Perimeter : 整數，傳回周長
const int Diamond::Perimeter(void) const{
    return nuit_num*4;
}//Perimeter()

//Area : 浮點數，傳回面積
const double Diamond::Area(void) const{
    
    double result = 0;
    
    result = (double) pow(nuit_num,2) * sqrt(3.0)/2.0;
    return result;


}//Area

//Draw: 印出菱形的樣子，在填充時符號間須間隔一個 '空白'，禁止使用setw

void Diamond::Draw(void) const{ 
    // 6 ,1,6
    // 5 ,1 ,1 ,1 ,5
    int i,j,k;
    
    if ( nuit_num == 1 ){
        cout << side <<endl;
    }//if
    
    else{
        int f = nuit_num;
        //上半部(含中線)
        for ( i = 1; i <= f ;i++ ){
            for(j=f-i;j>0;j--){//畫空白
    		        cout << " ";
        		}//for
        		for(j=1;j<=i;j++){//畫side and fill
        			  if ( j == 1 || j == i)
                     cout << side << " " ;
                 else 
                     cout << filler << " " ;
        		}//for 
            cout << endl;
        }//for
        //下半部
        
        for ( i = f-1; i >0 ;i-- ){
            for(j=f-i;j>0;j--){//畫空白
    		        cout << " ";
        		}//for
        		for(j=1;j<=i;j++){//畫fill
        			  if ( j == 1 || j == i)
                     cout << side << " " ;
                 else 
                     cout << filler << " " ;
        		}//for 
            cout << endl;
        }//for
    }//else
}//Draw


//Summary : 印出單位大小、邊長、周長、面積、菱形的樣子
void Diamond::Summary(void) const{
    cout << "Size of diamond's side = " << GetSize() << "units" <<endl;
    cout << "Perimeter of diamond =  " << Perimeter() << "units" <<endl;
    cout << "Area of diamond = " << Area() << "units" <<endl;
    cout << "Diamond looks like:" <<endl;
    Draw();
}//Summary

//set
//Grow : 讓所有邊長增大 1，超過39不應再增大
void Diamond::Grow(void){
    nuit_num++;
    if ( nuit_num >39 )
        nuit_num = 39;        
}//Grow 

//Shrink : 讓所有邊長減小 1，低於1不應再變小
void Diamond::Shrink(void){
    nuit_num--;
    if ( nuit_num < 1  )
        nuit_num = 1;  
}//Shrink


//SetBorder : 更換邊長符號(ascii 33~126)，當符號不合法時採用預設'#'
void Diamond::SetBorder(char new_side ){
    side = new_side;
    if ( side < '!' || side > '~' )
        side = '#';
}//SetBorder

//SetFill : 更換填充符號(ascii 33~126)，當符號不合法時採用預設'*'
void Diamond::SetFill( char new_filler  ){
    filler = new_filler;
    if ( filler < '!' || filler > '~' )
        filler = '*';

}//

