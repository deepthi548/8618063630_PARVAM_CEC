/* create a constructor and call the parent constructor by passing parameters and initialize the remaining attributes*/
#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;
// Base class
class Shape {
public:
    Shape() {
        cout << "Shape created." << endl;
    }

    virtual void calculateArea() {
        cout << "Area not defined for generic shape." << endl;
    }
};
// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : Shape(), radius(r) {
        cout << "Circle created with radius: " << radius << endl;
    }
    void calculateArea() override {
        double area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};
// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : Shape(), length(l), width(w) {
        cout << "Rectangle created with length: " << length << " and width: " << width << endl;
    }
    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};
// Derived class: Triangle
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : Shape(), base(b), height(h) {
        cout << "Triangle created with base: " << base << " and height: " << height << endl;
    }
    void calculateArea() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};
// Main function
int main() {
    Shape shape;
    Circle circle(5.0);         // radius = 5.0
    Rectangle rectangle(4.0, 6.0); // length = 4.0, width = 6.0
    Triangle triangle(3.0, 4.0); // base = 3.0, height = 4.0
    shape.calculateArea();       // Calls base class method
    circle.calculateArea();      // Calls Circle's method
    rectangle.calculateArea();   // Calls Rectangle's method
    triangle.calculateArea();    // Calls Triangle's method
    return 0;
}
