/*create a class circle with a private radius and public functions to inout the radius and calculate the area*/
#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
public:
    void inputRadius() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }
    double calculateArea() {
        return 3.14159 * radius * radius; 
    }
};
int main() {
    Circle circle;
    circle.inputRadius();
    double area = circle.calculateArea();
    cout << "Area of the circle: " << area << endl;
    return 0;
} 
