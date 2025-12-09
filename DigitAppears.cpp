#include <iostream>
using namespace std;

int countFrequency(int arr[], int n, int target) {
    if (n == 0)
        return 0;
    return (arr[n - 1] == target) + countFrequency(arr, n - 1, target);
}

int main() {
    int arr[] = {2, 5, 3, 7, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 3;
    cout << "Digit " << target 
         << " appears " << countFrequency(arr, n, target) 
         << " times." << endl;

    return 0;
}
