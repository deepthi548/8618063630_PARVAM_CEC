//addition of array//
#include <iostream>
using namespace std;
int main() {
    const int size = 5;
    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {10, 20, 30, 40, 50};
    int sum[size];
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    cout << "Sum of arrays: ";
    for (int i = 0; i < size; i++) {
        cout << sum[i] << " ";
    }
    return 0;
}