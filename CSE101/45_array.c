#include <stdio.h>
int main()
{
    int *p1 , n , i ,temp;
    printf("enter the number of elements in the array\n ");
    scanf("%d",&n);
    p1= (int *)malloc(sizeof(int)*(n));
    printf("enter %d elements of the array\n ",n);
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&p1[i]);
    }
    return 0;
}