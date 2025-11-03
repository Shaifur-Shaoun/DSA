#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;

public:
    Student(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << name << "  " << id << endl;
    }
};

int main() {
    Student* students[4];

    students[0] = new Student("Olivia", 456);
    students[1] = new Student("Harris", 123);
    students[2] = new Student("Jacob", 678);
    students[3] = new Student("Isla", 349);

    cout << "Student Information:" << endl << endl;
    for (int i = 0; i < 4; i++) {
        students[i]->display();
    }

    
    for (int i = 0; i < 4; i++) {
        delete students[i];
    }

    return 0;
}
