#include<stdio.h>
#define PI 3.14
/*this is a multiline comment

this is ignored by my compiler
*/
int main(int argc, char const *argv[])
{
    int a =8;
    const float b= 7.333;
    // PI = 7.33; //Cannot do this since PI is a constant
    printf("%f\n",PI);
    printf("my backslash \\%f\n",PI);
    printf("tab character \t\t my backslash \\n %f \n",PI);
    printf("tab character \t\t my backslash \a %f",PI);
    // b=7.22 ; Cannot do this since b is a constant
    // printf("Hello world\n");
    // printf("The value of a is %d and the value of b is %2.4f\n",a,b);
    // printf("%7.4f\n",b);
    // printf("%-7.4fthis",b);
    return 0;
}
