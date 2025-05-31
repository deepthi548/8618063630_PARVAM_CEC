#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    cout << "enter the number";
    cin >> n;
    while(n>0)
{
    digit=n%10;
    cout << digit <<"\n";
    n=n/10;
}
return 0;
}