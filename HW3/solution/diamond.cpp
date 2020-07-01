#include <bits/stdc++.h>
#include "diamond.h"
using namespace std;


//GetSize : ��ơA�Ǧ^���
const int Diamond::GetSize( void ) const{ 
    return  nuit_num ;
} //GetSize

//Perimeter : ��ơA�Ǧ^�P��
const int Diamond::Perimeter(void) const{
    return nuit_num*4;
}//Perimeter()

//Area : �B�I�ơA�Ǧ^���n
const double Diamond::Area(void) const{
    
    double result = 0;
    
    result = (double) pow(nuit_num,2) * sqrt(3.0)/2.0;
    return result;


}//Area

//Draw: �L�X�٧Ϊ��ˤl�A�b��R�ɲŸ��������j�@�� '�ť�'�A�T��ϥ�setw

void Diamond::Draw(void) const{ 
    // 6 ,1,6
    // 5 ,1 ,1 ,1 ,5
    int i,j,k;
    
    if ( nuit_num == 1 ){
        cout << side <<endl;
    }//if
    
    else{
        int f = nuit_num;
        //�W�b��(�t���u)
        for ( i = 1; i <= f ;i++ ){
            for(j=f-i;j>0;j--){//�e�ť�
    		        cout << " ";
        		}//for
        		for(j=1;j<=i;j++){//�eside and fill
        			  if ( j == 1 || j == i)
                     cout << side << " " ;
                 else 
                     cout << filler << " " ;
        		}//for 
            cout << endl;
        }//for
        //�U�b��
        
        for ( i = f-1; i >0 ;i-- ){
            for(j=f-i;j>0;j--){//�e�ť�
    		        cout << " ";
        		}//for
        		for(j=1;j<=i;j++){//�efill
        			  if ( j == 1 || j == i)
                     cout << side << " " ;
                 else 
                     cout << filler << " " ;
        		}//for 
            cout << endl;
        }//for
    }//else
}//Draw


//Summary : �L�X���j�p�B����B�P���B���n�B�٧Ϊ��ˤl
void Diamond::Summary(void) const{
    cout << "Size of diamond's side = " << GetSize() << "units" <<endl;
    cout << "Perimeter of diamond =  " << Perimeter() << "units" <<endl;
    cout << "Area of diamond = " << Area() << "units" <<endl;
    cout << "Diamond looks like:" <<endl;
    Draw();
}//Summary

//set
//Grow : ���Ҧ�����W�j 1�A�W�L39�����A�W�j
void Diamond::Grow(void){
    nuit_num++;
    if ( nuit_num >39 )
        nuit_num = 39;        
}//Grow 

//Shrink : ���Ҧ������p 1�A�C��1�����A�ܤp
void Diamond::Shrink(void){
    nuit_num--;
    if ( nuit_num < 1  )
        nuit_num = 1;  
}//Shrink


//SetBorder : ������Ÿ�(ascii 33~126)�A��Ÿ����X�k�ɱĥιw�]'#'
void Diamond::SetBorder(char new_side ){
    side = new_side;
    if ( side < '!' || side > '~' )
        side = '#';
}//SetBorder

//SetFill : �󴫶�R�Ÿ�(ascii 33~126)�A��Ÿ����X�k�ɱĥιw�]'*'
void Diamond::SetFill( char new_filler  ){
    filler = new_filler;
    if ( filler < '!' || filler > '~' )
        filler = '*';

}//

