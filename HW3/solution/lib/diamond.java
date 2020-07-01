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
    
    
    //GetSize : 整數，傳回邊長
    public final int GetSize( ){
        return nuit_num;
    }//GetSize
    
    //Perimeter : 整數，傳回周長
    
    public final int Perimeter(){
        return nuit_num*4;
    }//Perimeter()    
    //Area : 浮點數，傳回面積
    public final double Area(){
        double result = 0;
        result = (double) Math.pow(nuit_num,2) * Math.sqrt(3.0)/2.0;
        return result;
    }//Area

    
    //Grow : 讓所有邊長增大 1，超過39不應再增大
    public void Grow(){
        nuit_num++;
        if ( nuit_num >39 )
            nuit_num = 39;        
    }//Grow 
    
    //Shrink : 讓所有邊長減小 1，低於1不應再變小
    public void Shrink(){
        nuit_num--;
        if ( nuit_num < 1  )
            nuit_num = 1;  
    }//Shrink
    
    
    //SetBorder : 更換邊長符號(ascii 33~126)，當符號不合法時採用預設'#'
    public void SetBorder(char new_side ){
        side = new_side;
        if ( side < '!' || side > '~' )
            side = '#';
    }//SetBorder
    
    //SetFill : 更換填充符號(ascii 33~126)，當符號不合法時採用預設'*'
    public void SetFill( char new_filler  ){
        filler = new_filler;
        if ( filler < '!' || filler > '~' )
            filler = '*';
    
    }//   SetFill 

    //Draw: 印出菱形的樣子，在填充時符號間須間隔一個 '空白'，禁止使用setw

    public final void Draw(){
        int i,j,k;
        
        if ( nuit_num == 1 ){
            System.out.println(side);
        }//if
        
        else{
            int f = nuit_num;
            //上半部(含中線)
            for ( i = 1; i <= f ;i++ ){
                for(j=f-i;j>0;j--){//畫空白
        		        System.out.print(" ") ;
            		}//for
            		for(j=1;j<=i;j++){//畫side and fill
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
            //下半部
            
            for ( i = f-1; i >0 ;i-- ){
                for(j=f-i;j>0;j--){//畫空白
        		        System.out.print(" ") ;
            		}//for
            		for(j=1;j<=i;j++){//畫fill
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
        
        
    //Summary : 印出單位大小、邊長、周長、面積、菱形的樣子
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