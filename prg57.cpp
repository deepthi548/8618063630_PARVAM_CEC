/*create a class employee and make three objects. store and display data for three different employees using each object*/
#include <iostream>
using namespace std;    
class Employee {
public:
    string name;
    int id;
    double salary;
    void inputData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displayData() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
};
int main() {
    Employee emp1, emp2, emp3;

    cout << "Enter details for Employee 1:" << endl;
    emp1.inputData();
    
    cout << "Enter details for Employee 2:" << endl;
    emp2.inputData();
    
    cout << "Enter details for Employee 3:" << endl;
    emp3.inputData();

    cout << "\nEmployee Details:" << endl;
    cout << "Employee 1: ";
    emp1.displayData();
    
    cout << "Employee 2: ";
    emp2.displayData();
    
    cout << "Employee 3: ";
    emp3.displayData();

    return 0;
}
