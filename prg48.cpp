// person with public members name and age.use an object to set avalue and display them//
#include<iostream>
using namespace std;
class person {
public:
    string name;
    int age;
    void display()
    {
        cout << "Name:" << name << ",Age:" << age << endl;
    }
};
int main() {
    person p;
    p.name="Alice";
    p.age=25;
    p.display();
    return 0;
}
