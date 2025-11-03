#include <iostream>
using namespace std;

void calculate(float radius, float *circumference, float *area) {
    *circumference = 2 * 3.1416 * radius;
    *area = 3.1416 * radius * radius;
}

int main() {
    float r, c, a;
    cout << "Enter radius: ";
    cin >> r;

    calculate(r, &c, &a);

    cout << "Area = " << a << endl;
    cout << "Circumference = " << c << endl;

    return 0;
}
