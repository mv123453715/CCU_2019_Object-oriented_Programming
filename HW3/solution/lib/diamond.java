package lib;
import java.util.Scanner;
import java.util.Scanner.*;
import java.io.FileReader;
import java.io.FileReader.*;
import java.io.*;
import java.util.*;
import java.io.IOException;
import java.util.ArrayList;

public class diamond {
    private int nuit_num;
    private char side;
    private char filler;
    
 
    public diamond(int num,char s,char f) { 
        nuit_num = num;
        side = s;
        filler = f;
        //this(num,s,f);
        if ( nuit_num < 1 )
            nuit_num = 1;
        else if ( nuit_num >39 )
            nuit_num = 39;
            
        if ( side < '!' || side > '~' )
            side = '#';
        if ( filler < '!' || filler > '~' )
            filler = '*';
    }//diamond

    public diamond(int num) { 
        nuit_num = num;
        side = '#';
        filler = '*';
        if ( nuit_num < 1 )
            nuit_num = 1;
        else if ( nuit_num >39 )
            nuit_num = 39;
            
        if ( side < '!' || side > '~' )
            side = '#';
        if ( filler < '!' || filler > '~' )
            filler = '*';
    }//diamond    
    
    public diamond(int num,char s) { 
        nuit_num = num;
        side = s;
        filler = '*';
        if ( nuit_num < 1 )
            nuit_num = 1;
        else if ( nuit_num >39 )
            nuit_num = 39;
            
        if ( side < '!' || side > '~' )
            side = '#';
        if ( filler < '!' || filler > '~' )
            filler = '*';
    }//diamond  

    
    
    //public ~diamond();
    
    
    //GetSize : ��ơA�Ǧ^���
    public final int GetSize( ){
        return nuit_num;
    }//GetSize
    
    //Perimeter : ��ơA�Ǧ^�P��
    
    public final int Perimeter(){
        return nuit_num*4;
    }//Perimeter()    
    //Area : �B�I�ơA�Ǧ^���n
    public final double Area(){
        double result = 0;
        result = (double) Math.pow(nuit_num,2) * Math.sqrt(3.0)/2.0;
        return result;
    }//Area

    
    //Grow : ���Ҧ�����W�j 1�A�W�L39�����A�W�j
    public void Grow(){
        nuit_num++;
        if ( nuit_num >39 )
            nuit_num = 39;        
    }//Grow 
    
    //Shrink : ���Ҧ������p 1�A�C��1�����A�ܤp
    public void Shrink(){
        nuit_num--;
        if ( nuit_num < 1  )
            nuit_num = 1;  
    }//Shrink
    
    
    //SetBorder : ������Ÿ�(ascii 33~126)�A��Ÿ����X�k�ɱĥιw�]'#'
    public void SetBorder(char new_side ){
        side = new_side;
        if ( side < '!' || side > '~' )
            side = '#';
    }//SetBorder
    
    //SetFill : �󴫶�R�Ÿ�(ascii 33~126)�A��Ÿ����X�k�ɱĥιw�]'*'
    public void SetFill( char new_filler  ){
        filler = new_filler;
        if ( filler < '!' || filler > '~' )
            filler = '*';
    
    }//   SetFill 

    //Draw: �L�X�٧Ϊ��ˤl�A�b��R�ɲŸ��������j�@�� '�ť�'�A�T��ϥ�setw

    public final void Draw(){
        int i,j,k;
        
        if ( nuit_num == 1 ){
            System.out.println(side);
        }//if
        
        else{
            int f = nuit_num;
            //�W�b��(�t���u)
            for ( i = 1; i <= f ;i++ ){
                for(j=f-i;j>0;j--){//�e�ť�
        		        System.out.print(" ") ;
            		}//for
            		for(j=1;j<=i;j++){//�eside and fill
            			  if ( j == 1 || j == i){
                         System.out.print(side);
                         System.out.print(" ") ;
                     }//if
                     else {
                         System.out.print(filler);
                         System.out.print(" ") ;
                     }//else
            		}//for 
                System.out.print("\n") ;
            }//for
            //�U�b��
            
            for ( i = f-1; i >0 ;i-- ){
                for(j=f-i;j>0;j--){//�e�ť�
        		        System.out.print(" ") ;
            		}//for
            		for(j=1;j<=i;j++){//�efill
            			  if ( j == 1 || j == i){
                         System.out.print(side);
                         System.out.print(" ") ;
                     }//if
                     else{
                         System.out.print(filler);
                         System.out.print(" ") ;
                     }//else
            		}//for 
                System.out.print("\n") ;
            }//for
        }//else
    }//Draw
        
        
    //Summary : �L�X���j�p�B����B�P���B���n�B�٧Ϊ��ˤl
    public final void Summary(){
        System.out.print("Size of diamond's side = ") ;
        System.out.print(GetSize()) ;
        System.out.print("units\n") ;
        System.out.print("Perimeter of diamond = ") ;
        System.out.print(Perimeter()) ;
        System.out.print("units\n") ;
        System.out.print("Area of diamond = ") ;
        System.out.print(Area()) ;
        System.out.print("units\n") ;        
        System.out.print("Diamond looks like:\n") ; 
        Draw();
    }//Summary
    
}//diamond