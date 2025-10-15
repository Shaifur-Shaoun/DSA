#include <iostream>
#include "dynarr.cpp" 
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

   
    dynArr<int> arr(n);

    cout << "Enter " << n << " integer values:" << endl;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        arr.setValue(i, value);
    }

    cout << "\nYou entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr.getValue(i) << " ";
    }

    cout << endl;
    return 0;
}
