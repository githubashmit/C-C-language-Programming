#include <stdio.h>

int main() {
    int a;
    float b;
    char c;

    printf("Enter an integer, a float, and a character:\n ");
    scanf("%d\n %f\n %c", &a, &b, &c);

    printf("You entered: %d, %f, %c", a, b, c);

    return 0;
}
