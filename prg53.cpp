#include<iostream>
using namespace std;
int main() {
    int number=30;
   int *p;
    p=&number;
    cout << "Address of the variable is:" <<&number << endl;
    cout << "Address of p variable is:" << p << endl;
    cout << "Value of the variable is:" << *p << endl;
    return 0;
}