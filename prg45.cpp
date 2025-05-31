//area of a triangle and rectangle using class//
#include <iostream>
using namespace std;
class Rectangle {
public:
    float length, width;
    float area() {
        return length * width;
    }
};
class Triangle {
public:
    float base, height;
    float area() {
        return 0.5 * base * height;
    }
};
int main() {
    Rectangle r;
    Triangle t;
    cout << "Rectangle:\n";
    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;
    cout << "\nTriangle:\n";
    cout << "Enter base: ";
    cin >> t.base;
    cout << "Enter height: ";
    cin >> t.height;
    cout << "\nArea of Rectangle = " << r.area() << endl;
    cout << "Area of Triangle = " << t.area() << endl;
    return 0;
}