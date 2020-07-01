#ifndef Grade_h
#define Grade_h

#include <bits/stdc++.h>
using namespace std;


class Student{ // Student (Base class ) 
    private:
        string _la_name,_fir_name,_course;
          
    public:
        Student( string ln,string fn,string c  ):_la_name(ln),_fir_name(fn),_course(c){};
        ~Student(){};//destructor
        virtual const void grade(){};
        string const get_la_name() const;
        string const get_fir_name() const;
        string const get_course() const;
        
};//Student


class English :public Student { // English(derived class)
    private:
        int _Attend,_Pro,_Mid,_Final;
        double _gra;
        
    public:
        English(string ln,string fn,string c ,int Att, int Pro,int Mid,int Fin) : Student(ln,fn,c), _Attend(Att),_Pro(Pro),_Mid(Mid),_Final(Fin),_gra(0.0) {};
        ~English(){};
        
        const void grade();
        int const get_Final() const;
        double get_gra();
};//English


class History :public Student { // History (derived class)
    private:
        int _Term,_Mid,_Final;
        double _gra;
        
    public:
        
        History(string ln,string fn,string c ,int Term,int Mid,int Fin) : Student(ln,fn,c),_Term(Term),_Mid(Mid),_Final(Fin),_gra(0.0) {};
        ~History(){};
        
        const void grade();
        int const get_Final() const;
        double  get_gra();
};//History 


class Math :public Student { // Math (derived class)
    private:
        int _Q1,_Q2,_Q3,_Q4,_Q5;
        int _T1,_T2,_Final;
        double _gra;
        
    public:
        Math(string ln,string fn,string c ,int Q1,int Q2,int Q3,int Q4,int Q5,int T1,int T2,int Fin) : Student(ln,fn,c),_Q1(Q1),_Q2(Q2),_Q3(Q3),_Q4(Q4),_Q5(Q5),_T1(T1),_T2(T2),_Final(Fin),_gra(0.0) {};
        ~Math(){}
        
        const void grade();
        int const get_Final() const;
        double  get_gra();
};//Math 




char LetterGrade ( double &g );
void test_input( vector<English> &Eng,vector<History> &His,vector<Math> &Mat );
void test_output ( vector<English> &Eng,vector<History> &His,vector<Math> &Mat );


#endif /* Grade_h*/