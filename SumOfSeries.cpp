// #include <iostream>
// #include <cmath>
// using namespace std;
// double seriesSum(int n) {
//     if (n == 0)
//         return 1;
//     else
//         return 1.0 / pow(2, n) + seriesSum(n - 1);
// }int main() {
// // int main() int a[10] = {10, 20, 30, 40, 5, 6, 7, 8, 90, 10};#include <iostream>
#include <cmath>
using namespace std;


double seriesSum(int n) {
    if (n == 0)
        return 1;
    else
        return 1.0 / pow(2, n) + seriesSum(n - 1);
}

int main() {

  
    int a[10] = {10, 20, 30, 40, 5, 6, 7, 8, 90, 10};
      cout << "Sum of the series: " << seriesSum(2) << endl;

    return 0;
}


// {