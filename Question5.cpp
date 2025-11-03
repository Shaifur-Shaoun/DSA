#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string name;
    string author;
    double price;

public:
    Book() {}
    Book(string n, string a, double p) {
        name = n;
        author = a;
        price = p;
    }

    string getName() { return name; }
    string getAuthor() { return author; }
    double getPrice() { return price; }

    void display() {
        cout << "Book: " << name << ", Author: " << author << ", Price: " << price << endl;
    }
};

int main() {
    const int size = 5;
    Book books[size] = {
        Book("C++ Basics", "John", 90),
        Book("OOP Concepts", "Alice", 120),
        Book("Data Structures", "Bob", 80),
        Book("Algorithms", "David", 150),
        Book("Programming Logic", "Sara", 95)
    };

    cout << "Original List:" << endl;
    for (int i = 0; i < size; i++) {
        books[i].display();
    }

    cout << "\nBooks with Price <= 100:" << endl;
    for (int i = 0; i < size; i++) {
        if (books[i].getPrice() <= 100)
            books[i].display();
    }

    return 0;
}
