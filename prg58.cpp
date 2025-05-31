/*create a base class named "Shape" include a method named calculatearea() that output a general messages like:"area not defined for generic shape"*/
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void calculateArea() {
        cout << "Area not defined for generic shape." << endl;
    }
};
class Circle : public Shape {
public:
    void calculateArea() override {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of circle is: " << 3.14 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
public:
    void calculateArea() override {
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area of rectangle is: " << length * width << endl;
    }
};
class Triangle : public Shape {
public:
    void calculateArea() override {
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of triangle is: " << 0.5 * base * height << endl;
    }
};
int main() {
    Shape* shape;
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    shape = &circle;
    shape->calculateArea();
    shape = &rectangle;
    shape->calculateArea();
    shape = &triangle;
    shape->calculateArea();
    return 0;
}
