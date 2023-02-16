#include <stdio.h>
int main()
{
    int x;
    printf("ENter the number of vertices ");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("Point");
    }
    else
    {
        if (x == 2)
        {
            printf("Line");
        }
        else
        {
            if (x == 3)
            {
                printf("Triange");
            }
            else
            {
                if (x == 4)
                {
                    printf("rectangle");
                }
                else
                {
                    if (x == 5)
                    {
                        printf("Pentagon");
                    }
                    else
                    {
                        printf("wrong");
                    }
                }
            }
        }
    }

    return 0;
}