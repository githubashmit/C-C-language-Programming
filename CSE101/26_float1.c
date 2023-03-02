#include <stdio.h>
int main()
{
    float x[5]={56,456,123,5678,45456.676,898};
    for (int i = 0; i < 6; i++)
    {
        printf("%10.2f\n",x[i]);
    }
    
    return 0;
}