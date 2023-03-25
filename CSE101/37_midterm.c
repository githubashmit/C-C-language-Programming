#include <stdio.h>
int show();

void main()
{
    int a;
    a=show();
    printf("%d", a);
}

int show()
{
    return 15.5;
    return 35;
}
