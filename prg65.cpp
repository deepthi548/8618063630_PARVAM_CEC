//exception handling//
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    try
    {
      if(age<18)
      throw(age);
      else
      cout<<"access given";  /* code */
    }
    catch(int a)
    {
        cout<<"access denied:minimum age must be 18,but your age is less than 18"<<a;
    }
    return 0;

}