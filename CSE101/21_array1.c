#include <stdio.h>
int main()
{
    int *p , n ,i , loc , ele;
    printf("enter the number of elements in the array \n");
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*(n+1));
    printf("enter %d elements of the array\n ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("enter the location where new element is to be inserted ");
    scanf("%d",&loc);
    printf("enter the element to be inserted to be inserted at location %d ",loc);
    scanf("%d",&ele);
    for ( i = n; i>=loc; i--)
    {
        p[i]= p[i-1];
    }
    p[loc-1]=ele;
    printf("new aray is \n");
    for ( i = 0; i <=n; i++)
    {
        printf("%d\n",p[i]);
    }
    
    
    return 0;
}