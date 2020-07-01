#include <bits/stdc++.h>
#include "Grade.h"
using namespace std;


void test_input( vector<English> &Eng,vector<History> &His,vector<Math> &Mat ){
//read input
    string input_file;
    cout << "Please enter the name of the input file."<<endl;
    cout << "Filename: ";
    cin >> input_file;
    cout << input_file<<endl;
    ifstream fin(input_file);
    if(!fin) {
       cout << "Error! opening file isn't exist!\n";
       exit(0);
    }//if
    
    //process

    int n,t_case = 1;
    char c;
    fin >> n ;
    fin.get(c);// \n
    //cout << "n:"<<n<<endl;
    
    while ( n-- ){
        //cout << "input: "<<t_case++<<endl;
        string l_name,f_name,course;
        char line[1024]; 
        fin.getline(line,1024) ;


        string line_str;
        line_str.assign( line );
        //cout <<line_str<<endl;
        int current = 0;
        int pos = line_str.find_first_of(",", current);
        l_name = line_str.substr(current, pos - current);
        f_name =  line_str.substr(pos - current+2,line_str.length());
        
        fin >> course;
        //cout << l_name<< "," << f_name<<","<<course<<endl;
        if( course ==  "English" ){
            int Att,Pro,Mid,Fin;
            fin >> Att>>Pro>>Mid>>Fin;
            English temp( l_name,f_name,course,Att,Pro,Mid,Fin );
            Eng.push_back(temp);
            //cout << Att<< "," << Pro<<","<<Mid<<","<<Fin<<endl;
        }//if
        else if( course ==  "History" ){
            int Term,Mid,Fin;
            fin >> Term>>Mid>>Fin;
            History temp( l_name,f_name,course,Term,Mid,Fin );
            His.push_back(temp);
            //cout << Term<< "," << Mid<<","<<Fin<<endl;
        }//else if
        
        else if ( course ==  "Math"){
            int Q1,Q2,Q3,Q4,Q5,T1,T2,Fin;
            fin >>Q1>>Q2>>Q3>>Q4>>Q5>>T1>>T2>>Fin;
            Math temp( l_name,f_name,course,Q1,Q2,Q3,Q4,Q5,T1,T2,Fin );
            Mat.push_back(temp);
            //cout << Q1<< "," << Q2<<","<<Q3<<","<<Q4<<","<<Q5<<","<<T1<<","<<T2<<","<<Fin<<endl;
        }//else if
        
        fin.get(c);// \n
    }//while
        
        
    fin.close();

};