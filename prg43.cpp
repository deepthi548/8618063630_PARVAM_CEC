#include <iostream>
using namespace std;
class Employee
{
public:
Employee()
{
cout<<"Default Constructor Invoked"<<endl; 
}
~Employee()
{
cout<<"Destructor Evoked \n";
}
};
int main(void)
{
cout<<"In Main func in";
cout<<"1st obj \n";
Employee el; 
cout<<"2nd obj \n";
Employee e2;
return 0;
}