//total and average using array//
#include <iostream>
using namespace std;
int main() {
    int numbers[5]; 
    int sum = 0;
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i]; 
    }
    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\nSum of numbers: " << sum << endl;
    return 0;
}