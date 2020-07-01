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
        //constructor  �������쬰�Ÿ��Ӽ� : �̤p 1�B�̤j 39�A����p��1�h�]��1�A�j��39�h�]��39 ����Ÿ��w�]��'#'�A��R�Ÿ��w�]��'*'
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
        
        //GetSize : ��ơA�Ǧ^���
        const int GetSize( void ) const;
        
        //Perimeter : ��ơA�Ǧ^�P��
        const int Perimeter(void) const;
        
        //Area : �B�I�ơA�Ǧ^���n
        const double Area(void) const;
        
        //Grow : ���Ҧ�����W�j 1�A�W�L39�����A�W�j
        void Grow(void) ;
        
        //Shrink : ���Ҧ������p 1�A�C��1�����A�ܤp
        void Shrink(void) ;
        
        
        //SetBorder : ������Ÿ�(ascii 33~126)�A��Ÿ����X�k�ɱĥιw�]'#'
        void SetBorder(char new_side ) ;
        
        //SetFill : �󴫶�R�Ÿ�(ascii 33~126)�A��Ÿ����X�k�ɱĥιw�]'*'
        void SetFill( char new_filler  ) ;
        //Draw: �L�X�٧Ϊ��ˤl�A�b��R�ɲŸ��������j�@�� '�ť�'�A�T��ϥ�setw
    
        void Draw(void) const;
        
        
        //Summary : �L�X���j�p�B����B�P���B���n�B�٧Ϊ��ˤl
        void Summary(void) const;
};//Diamond

#endif /* Diamond_h */