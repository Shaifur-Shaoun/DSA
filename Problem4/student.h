#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
using namespace std;    

class Student {
    private:
    string name;
    int id;

    public:
    Student(string n,int i);

    void display();
};  
#endif

   
    