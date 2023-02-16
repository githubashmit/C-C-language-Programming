#include <stdio.h>

int main ()
{
    int n,i=1;
    printf("Enter a number :\n");
    scanf("%d",&n);
    for(int k=1;k<=n;k++)
    {
        for(i=n;i>k;i--)
        {
            printf(" ");
        }
        for(i=1;i<=k;i++)
        {
            printf("%d",i);
        }
        for(i=k-1;i>=1;i--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    for(int k=n-1;k>=1;k--)
    {
        for(i=n;i>k;i--)
        {
            printf(" ");
        }
        for(i=1;i<=k;i++)
        {
            printf("%d",i);
        }
        for(i=k-1;i>=1;i--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}