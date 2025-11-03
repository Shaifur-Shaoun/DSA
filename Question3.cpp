#include <iostream>
using namespace std;

template <class T>
class Rectangle {
private:
    T length, width;

public:
    Rectangle(T l, T w) {
        length = l;
        width = w;
    }

    T calculateArea() {
        return length * width;
    }

    T calculatePerimeter() {
        return 2 * (length + width);
    }

    void displayDetails() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << ", Perimeter: " << calculatePerimeter() << endl << endl;
    }
};

int main() {
    Rectangle<int> r1(5, 3);
    Rectangle<float> r2(4.5, 2.5);

    r1.displayDetails();
    r2.displayDetails();

    return 0;
}
