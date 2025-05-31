//binary to decimal//
#include <iostream>
using namespace std;
int main() {
    int binary, decimal = 0, base = 1, lastDigit;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0) {
        lastDigit = bina
        ry % 10;  // get last digit
        
        if (lastDigit != 0 && lastDigit != 1) {
        
            cout << "Invalid binary number!" << endl;
            return 0;
        }
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    cout << "Decimal equivalent: " << decimal << endl;
 return 0;
}                           