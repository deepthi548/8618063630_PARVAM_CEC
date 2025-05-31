//create a class student that takes name and roll number as constructor parameters and displays them using a function
#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
    Student(string n, int r) : name(n), rollNumber(r) {}
    void display() {
        cout<<"Name:"<<name<<",Roll Number:"<<rollNumber<<endl;
    }
};
int main() {
    Student student("John Doe", 42);
    student.display();
    return 0;
}