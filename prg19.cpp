//using exore swapping of 2 numbers//
#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}