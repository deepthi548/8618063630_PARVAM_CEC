//summation of number//
#include<stdio.h>
long summ(int)
int main()
{
    int n=0
    scamf("%d",n);
    printf("sumation of %d is %1d",n,summ(n));
}
long summ (int no)
{
    if(no<=0) return 0;
    if(no==0)return 1;
    return no+summ(no-1);
    
}