
#ifndef ReadList_h
#define ReadList_h
#include <bits/stdc++.h>
using namespace std; 
void ReadList ( char filename[],vector<int> &A){
     //open file 
     FILE * fd;
     fd = fopen (filename , "r");
     char str[1000];
     char *token ;
     const char *s = " ";
     int i ;
     
     //fgets get string 
     if (fd == NULL) {
         cout << "Error! opening file isn't exist!\n";
         exit(0);
     }//if
     else {
         if ( fgets (str , 1000 , fd) != NULL ){
         /* walk through tokens */                        
             token = strtok(str, s);
             while( token != NULL ) {
                A.push_back(atoi(token));
                token = strtok(NULL, s);
            }//while
         }//if
         fclose (fd);
         
         
     }//else
}//ReadList

#endif /* ReadList_h*/