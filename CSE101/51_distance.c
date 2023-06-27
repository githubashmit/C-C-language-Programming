#include <stdio.h>
#include<time.h>
int main()
{
    time_t t;
    time(&t);
    char str[50];
    int a , b,c;
    printf("\nThis program has been written at(date and time): %s");
    printf("\n\n%c%c" , ctime(&t)[11],ctime(&t)[12]);
    a=ctime(&t)[11]-48;
    b=ctime(&t)[12]-48;
    if(a==1)
        b+=10;
    else
        if(a==2)
            b+=20;
    printf("\n\n%d",b);
    return 0;
}