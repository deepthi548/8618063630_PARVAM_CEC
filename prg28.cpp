//constuct a right angled triange with letters//
#include <iostream>
using namespace std;
int main() {
    int rows = 5;  
    char letter = 'a';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << letter;
        }
        cout << endl;
        letter++;  
    }
    return 0;
}