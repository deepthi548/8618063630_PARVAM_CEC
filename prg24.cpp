//addition of 2 dimentional array//
#include <iostream>
using namespace std;
int main() {
    const int rows = 2;
    const int cols = 3;
    int matrix1[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrix2[rows][cols] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    int sum[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum of the matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}