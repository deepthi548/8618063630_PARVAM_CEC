#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++);
{
    for(j=n;j>=n-i+1;j--);{
        printf("%d",j);
    }
    printf("\n");
}
return 0;

    
}