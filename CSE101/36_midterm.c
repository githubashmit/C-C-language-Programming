#include <stdio.h>
void fn1(int a){
     printf("%d",a);
     return a*a;
   }
int main()
{
    int a=5;
    fn1(a);
    printf("%d",a);
}
