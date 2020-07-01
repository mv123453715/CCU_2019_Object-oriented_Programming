#include <bits/stdc++.h>
#include "Grade.h"
using namespace std;

void test_output ( vector<English> &Eng,vector<History> &His,vector<Math> &Mat ){
//output
    string output_file;
    cout << "Please enter the name of the output file."<<endl;
    cout << "Filename: ";
    cin >> output_file;
    
    
    //fout
    ofstream fout(output_file); 
    
    
    
    if(!fout) { 
        cout << "無法寫入檔案" <<endl ;
        exit(127);
    } //if
    
    
    fout << "Student Grade Summary\n";
    fout << "----------------------------------\n\n";
    fout << "ENGLISH CLASS\n\n";
    fout << left << setw(36) << "Student" << left << setw(18) << "Final" <<  left << setw(18) << "Final" <<  left << "Letter"<< endl;
    fout << left << setw(36) << "Name"    << left << setw(18) << "Exam"  <<  left << setw(18)  << "Avg"  <<  left << "Grade" << endl;
    fout << "--------------------------------------------------------------------------------"<<endl;
    for ( int i = 0;i< Eng.size();i++ ){
        double gra = Eng[i].get_gra();
        char letgrade = LetterGrade(gra);
        fout << left << setw(36) << Eng[i].get_fir_name() + " " + Eng[i].get_la_name() << left << setw(18) << Eng[i].get_Final();
        fout << fixed << setprecision(2)<<  left << setw(18) << Eng[i].get_gra() << left << letgrade<< endl;
    }//for
    fout <<"\n";
    
    fout << "HISTORY CLASS\n\n";
    fout << left << setw(36) << "Student" << left << setw(18) << "Final" <<  left << setw(18) << "Final" <<  left << "Letter"<< endl;
    fout << left << setw(36) << "Name"    << left << setw(18) << "Exam"  <<  left << setw(18)  << "Avg"  <<  left << "Grade" << endl;
    fout << "--------------------------------------------------------------------------------"<<endl;
    for ( int i = 0;i< Eng.size();i++ ){
        double gra = His[i].get_gra();
        char letgrade = LetterGrade(gra);
        fout << left << setw(36) << His[i].get_fir_name() + " " + His[i].get_la_name() << left << setw(18) << His[i].get_Final();
        fout << fixed << setprecision(2)<<  left << setw(18) << His[i].get_gra() << left << letgrade<< endl;
    }//for
    fout <<"\n";
    
    fout << "MATH CLASS\n\n";
    fout << left << setw(36) << "Student" << left << setw(18) << "Final" <<  left << setw(18) << "Final" <<  left << "Letter"<< endl;
    fout << left << setw(36) << "Name"    << left << setw(18) << "Exam"  <<  left << setw(18)  << "Avg"  <<  left << "Grade" << endl;
    fout << "--------------------------------------------------------------------------------"<<endl;
    for ( int i = 0;i< Eng.size();i++ ){
        double gra = Mat[i].get_gra();
        char letgrade = LetterGrade(gra);
        fout << left << setw(36) << Mat[i].get_fir_name() + " " + Mat[i].get_la_name() << left << setw(18) << Mat[i].get_Final();
        fout << fixed << setprecision(2)<<  left << setw(18) << Mat[i].get_gra() << left << letgrade<< endl;
    }//for
    
    
    fout.close(); 
    cout << "Processing Complete."<<endl;

}//test_output