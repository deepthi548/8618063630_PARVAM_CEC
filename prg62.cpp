/*3. Create a derived class "Developer":
Additional attribute(private): overtimePay (float)

Constructor:
============
Create Constructor and call the Parent Constructor by passing parameters and initialize the remaining attributes.

Override calculateSalary() → salary = baseSalary + overtimePay
Override display() → prints name, id, and total salary
*/
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
int main() {
    Employee emp("sai", 101, 50000.0);
    Developer dev("kiran", 102, 60000.0, 5000.0);

    cout << "Employee Details:" << endl;
    emp.display();

    cout << "Developer Details:" << endl;
    dev.display();

    return 0;
}