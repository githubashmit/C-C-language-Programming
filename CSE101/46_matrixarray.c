#include <stdio.h>
int main()
{
    int i,j, r1 , c1 , r2 , c2 , m1[10][10] , m2[10][10] , m3[10][10];
    printf("enter rows and cols of matrix 1");
    scanf("%d%d",&r1 , &c1);
    printf("enter rows and cols of matrix 2 ");
    scanf("%d%d",&r2 , &c2);
    if (r1 == r2 && c1==c2)
    {
        printf("enter the elements of matrix 1");
        for ( i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d",&m1[i][j]);
            }
            
        }
        printf("enter the elements of matrix 2");
        for ( i = 0; i < r2; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                scanf("%d", &m2[i][j]);
                m3[i][j]=m1[i][j] + m2[i][j];
            }
        }
        printf("resultant matrix is \n");
        for ( i = 0; i < r2; i++)
        {
            for ( j = 0; j < c2; j++)
            {
                printf("%d", &m3[i][j] );
            }
            printf("\n");
            
        }
        
        
        
    }
    else{
        printf("matrix cannot be added");
    }
    
    return 0;
}