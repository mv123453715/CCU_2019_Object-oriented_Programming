#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef struct Char_statis {  //the struct of store char and num 
    char c;
    int num;
} Char_statis;


void boot( Char_statis char_fre_matrix[] ); //boot 
int is_find( Char_statis char_fre_matrix[],char c ,int ch_f_num); // find appeared ,yes return index,no return -1

int main (int argc, char *argv[]) {
    Char_statis char_fre_matrix[200];
    int i,j,k,lentemp,find_result ;
    int ch_f_num = 0;
    boot(char_fre_matrix);//boot initial
    
    //begain string analysis
    for ( i = 1 ; i < argc ; i++ ){
        lentemp = strlen(argv[i]);//string length
        
        for ( j = 0 ; j < lentemp;j++ ){
            find_result = is_find( char_fre_matrix,argv[i][j] ,ch_f_num);
            
            //not find create char
            if ( find_result == -1 ){  
                ch_f_num++;
                char_fre_matrix[ch_f_num].c = argv[i][j];
                char_fre_matrix[ch_f_num].num++;
            }//if

            //find +1
            else if ( find_result != -1 ) 
                char_fre_matrix[find_result].num++;
        }//for
    }//for


    //print result
    for ( i = 1 ; i <=ch_f_num;i++ ){
        cout << char_fre_matrix[i].c << "-" << char_fre_matrix[i].num <<endl;
    }//for
}//main()

//boot
void boot( Char_statis char_fre_matrix[] ){
    int i;
    for ( i = 0;i <200;i++ )
        char_fre_matrix[i].num = 0;
}//boot()

// find appeared ,yes return index,no return -1
int is_find( Char_statis char_fre_matrix[],char c ,int ch_f_num){
    int i,j,k;
    for ( i = 0 ; i<=ch_f_num;i++ ){
        if ( char_fre_matrix[i].c == c  )
            return i;
    }//for

    return -1;

}//is_find
