/*Create a derived class "Manager":
Additional attribute(private): bonus (float)
Constructor:
============
Create Constructor and call the Parent Constructor by passing parameters and initialize the remaining attributes.*/

#include <iostream>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    float baseSalary;
public:

    Employee(string n, int i, float salary) : name(n), id(i), baseSalary(salary) {}

    virtual float calculateSalary() {
        return baseSalary;
    }

    virtual void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << calculateSalary() << endl;
    }
};
class Manager : public Employee {
private:
    float bonus;
public:
    Manager(string n, int i, float salary, float b) : Employee(n, i, salary), bonus(b) {}

    float calculateSalary() override {
        return baseSalary + bonus;
    }

    void display() override {
        cout << "Name: " << name << ", ID: " << id << ", Total Salary: " << calculateSalary() << endl;
    }
};
int main() {
    Employee emp("sai", 101, 50000.0);
    Manager mgr("kiran", 102, 60000.0, 10000.0);

    cout << "Employee Details:" << endl;
    emp.display();

    cout << "Manager Details:" << endl;
    mgr.display();

    return 0;
}