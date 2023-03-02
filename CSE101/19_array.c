#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of values in array\n");
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(sizeof(int)*n+1);
    int i;
    
    for (i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your array is\n");
    for ( i = 0; i <n; i++)
    {
        
        printf(" %3d",a[i]);
    }
    printf("Enter the location where you wish to insert an element\n");
    int p;
    scanf("%d",&p);
    printf("Enter the value to insert\n");
    int v;
    scanf("%d",&v);
    for ( i = 0; i < n+1; i++)
    {
        
    }
    
    return 0;
}