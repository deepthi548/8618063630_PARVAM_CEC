//C Program to Generate Fibonocci Series of N numbers 
#include<stdio.h>
void(int n)
{
    int a=0, b=1,next;
    printf("fibonocci series:");
    for(int i=1;i<=1;i++)
{
    printf("%d",a);
    next=a+b;
    a=b;
    b=next;
}
}
int main()
{
    int n;
    printf("enter the number of terms:");
    scanf("%d",&n);

    if(n<=0);
    {
        printf("enter a positive integer");
        
    }
    else{
        generate fibonocci(n);
    }
return 0;
}