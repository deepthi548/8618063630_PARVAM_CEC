//find the area of rectangle and triangle using class//
#include <iostream>
using namespace std;
class Rectangle 
{
    int length, breadth;
public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    int area() 
    {
        return length * breadth;
    }
};
class Triangle 
{
    int base, height;
public:
    Triangle(int b, int h) : base(b), height(h) {}
    
    int area() 
    {
        return (base * height) / 2;
    }
};
int main() 
{
    int l, b, base, height;
    
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    Rectangle rect(l, b);
    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    Triangle tri(base, height);
    cout << "Area of triangle: " << tri.area() << endl;
    return 0;
    }