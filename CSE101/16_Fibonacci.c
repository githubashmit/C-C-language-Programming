#include<stdio.h>
                                                 
int main() {
    int n, c=0, a=1, b=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n==0 || n==1) {
    printf("Valid");
    } else {
    while (c<n) {
    c = a+b;
    b = a;
    a = c;
    }
    if (c==n) {
    printf("Valid");
    } else {
    printf("Invalid");
    }
    }
    return 0;
}