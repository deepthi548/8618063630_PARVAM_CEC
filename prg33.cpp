//create a rectangle of *where in coloumn is 5 and row is 6//
#include <iostream>
using namespace std;
int main() {
    int rows = 6;
    int columns = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}