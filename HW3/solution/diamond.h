#ifndef Diamond_h
#define Diamond_h

#include <bits/stdc++.h>
using namespace std;
class Diamond{
    private:
        int nuit_num;
        char side;
        char filler;

    public:
        //constructor  邊長的單位為符號個數 : 最小 1、最大 39，邊長小於1則設成1，大於39則設成39 邊長符號預設為'#'，填充符號預設為'*'
        Diamond ( int num,char s = '#',char f = '*' ) :nuit_num(num),side(s),filler(f){
            if ( nuit_num < 1 )
                nuit_num = 1;
            else if ( nuit_num >39 )
                nuit_num = 39;
                
            if ( side < '!' || side > '~' )
                side = '#';
            if ( filler < '!' || filler > '~' )
                filler = '*';
        };
        
        //destructor  
        //~Diamond ();
        
        //GetSize : 整數，傳回邊長
        const int GetSize( void ) const;
        
        //Perimeter : 整數，傳回周長
        const int Perimeter(void) const;
        
        //Area : 浮點數，傳回面積
        const double Area(void) const;
        
        //Grow : 讓所有邊長增大 1，超過39不應再增大
        void Grow(void) ;
        
        //Shrink : 讓所有邊長減小 1，低於1不應再變小
        void Shrink(void) ;
        
        
        //SetBorder : 更換邊長符號(ascii 33~126)，當符號不合法時採用預設'#'
        void SetBorder(char new_side ) ;
        
        //SetFill : 更換填充符號(ascii 33~126)，當符號不合法時採用預設'*'
        void SetFill( char new_filler  ) ;
        //Draw: 印出菱形的樣子，在填充時符號間須間隔一個 '空白'，禁止使用setw
    
        void Draw(void) const;
        
        
        //Summary : 印出單位大小、邊長、周長、面積、菱形的樣子
        void Summary(void) const;
};//Diamond

#endif /* Diamond_h */