#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a =8;
    float b= 7.333;
    printf("Hello world\n");
    // printf("The value of a is %d and the value of b is %2.4f\n",a,b);
    printf("%7.4f\n",b);
    printf("%-7.4fthis",b);
    return 0;
}
