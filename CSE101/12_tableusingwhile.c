#include <stdio.h>
int main()
{
    int x;
    int n =1;
    printf("Enter a number whose table is to be printed \n");
    scanf("%d",&x);
    while(n<=10){
        printf("%d * %d = %d\n",x,n,x*n);
        n++;
    }
    return 0;
}