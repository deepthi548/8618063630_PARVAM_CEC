#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=5;i<=n;i++)
    {
        for(j=5;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}