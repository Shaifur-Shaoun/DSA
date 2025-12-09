#include <iostream>
using namespace std;

int countDigits(int arr[], int n) {
    if (n == 0) 
        return 0;
    return 1 + countDigits(arr, n - 1);
}

int main() {
    int arr[] = {2, 5, 3, 7, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Total digits = " << countDigits(arr, n) << endl;
    return 0;
}
