#include"student.h"

Student::Student(string n,int i) {
    name = n;
    id = i;
}
void Student::display() {
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
}