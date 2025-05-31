/*create a class base with a protected variable. Derive a Derived and use the protected variable in a public function*/
#include <iostream>
using namespace std;
class Base {
protected:
    int protectedVar;   
public:
    Base(int value) : protectedVar(value) {} 
};
class Derived : public Base {
public:
    Derived(int value) : Base(value) {}  
    void display() {
        cout << "Protected Variable: " << protectedVar << endl;  
    }
};
int main() {
    Derived obj(42);  
    obj.display();     
    return 0;
}
 