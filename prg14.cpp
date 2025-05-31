//both simple intrest and compound intrest//
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float p,r,t,si,ci,a;
    int ch;
    cout<<"1.Simple Interest\n2.Compound Interest\n3.Both\nEnter choice:";
    cin>>ch;
    cout<<"Enter principal:";
    cin>>p;
    cout<<"Enter rate:";
    cin>>r;
    cout<<"Enter time:";
    cin>>t;
    
    switch(ch)
    {
        case 1:
            si=(p*r*t)/100;
            cout<<"Simple Interest="<<si;
            break;
            
        case 2:
            a=p*pow((1+r/100),t);
            ci=a-p;
            cout<<"Compound Interest="<<ci;
            break;
            
        case 3:
            si=(p*r*t)/100;
            cout<<"Simple Interest="<<si;
            a=p*pow((1+r/100),t);
            ci=a-p;
            cout<<"Compound Interest="<<ci;     
            cout<<"Difference="<<ci-si;
            break;
        default:
            cout<<"Wrong choice";
    }
    return 0;
}