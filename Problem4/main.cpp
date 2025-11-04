#include<iostream>
#include"student.h"
#include"student.cpp"
using namespace std;

int main() {
    Student s1("Alice", 101);
    Student s2("Bob", 102);

    s1.display();
    s2.display();

    return 0;
}