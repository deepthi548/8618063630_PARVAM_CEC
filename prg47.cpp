#include <iostream>
using namespace std;
class Polygon {
public:
    double calculateArea() {
        return 0;
    }
};
class Rectangle : public Polygon {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double calculateArea() {
        return length * width;
    }
};
class Triangle : public Polygon {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    double calculateArea() {
        return 0.5 * base * height;
    }
};
int main() {
    Rectangle rectangle(5, 4);
    Triangle triangle(6, 8);
    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;
    cout << "Area of Triangle: " << triangle.calculateArea() << endl;
    return 0;
}