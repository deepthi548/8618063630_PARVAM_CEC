//write a program to  find the biggest no in array using pointer//
#include<stdio.h>
int main()
{
int size=0,a[100],i,*largest=a;
scanf("%d",&size);
for(i=0;i<size;scanf("%d",a+i++));

for(i=1;i<size;i++)
{
    if(*largest<a[i])
    largest=&a[i];
}
printf("largest element is %d",*largest);

}

