#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }

    float calculatePerimeter() {
        return 2 * (length + width);
    }

    void displayDetails() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl << endl;
    }
};

int main() {
    Rectangle r1(5, 3), r2(7, 2);

    r1.displayDetails();
    r2.displayDetails();

    return 0;
}
