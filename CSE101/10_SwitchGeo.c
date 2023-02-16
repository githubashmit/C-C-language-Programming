#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number of vertices\n ");
    scanf("%d", &x);

    switch(x)
    {
        case 1:
            printf("Point");
            break;
        case 2:
            printf("Line");
            break;
        case 3:
            printf("Triangle");
            break;
        case 4:
            printf("Rectangle");
            break;
        case 5:
            printf("Pentagon");
            break;
        default:
            printf("Wrong");
            break;
    }

    return 0;
}
