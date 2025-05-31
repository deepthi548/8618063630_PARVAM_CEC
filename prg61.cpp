/*4. In the main() function:
Create one Manager and one Developer object using hardcoded values.
Call their respective display() methods to show full details and computed salaries.*/
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
class Developer : public Employee {
private:
    float overtimePay;  
public:

    Developer(string n, int i, float salary, float overtime) : Employee(n, i, salary), overtimePay(overtime) {}

    float calculateSalary() override {
        return baseSalary + overtimePay;
    }

    void display() override {
        cout << "Name: " << name << ", ID: " << id << ", Total Salary: " << calculateSalary() << endl;
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
    
    Manager mgr("Alice", 201, 80000.0, 10000.0);
    
    Developer dev("Bob", 202, 60000.0, 5000.0);

    cout << "Manager Details:" << endl;
    mgr.display();

    cout << "Developer Details:" << endl;
    dev.display();

    return 0;
}