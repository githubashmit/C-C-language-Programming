#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    int r1,c1,r2,c2,i,j,k; 
    printf("enter rows and cols of matrix 1 "); 
    scanf("%d%d",&r1,&c1); 
    printf("enter rows and cols of matrix 2 "); 
    scanf("%d%d",&r2,&c2); 
    if(c1==r2) 
    { 
        int **m1,**m2,**m3; 
        m1 = (int **)malloc(r1*sizeof(int *)); 
        for(i=0;i<r1;i++) 
            m1[i] = (int *)malloc(c1*sizeof(int)); 
             
        m2 = (int **)malloc(r2*sizeof(int *)); 
        for(i=0;i<r2;i++) 
            m2[i] = (int *)malloc(c2*sizeof(int)); 
             
        m3 = (int **)malloc(r1*sizeof(int *)); 
        for(i=0;i<r1;i++) 
            m3[i] = (int *)malloc(c2*sizeof(int)); 
             
        printf("enter the elements of matrix 1"); 
        for(i=0;i<r1;i++) 
            for(j=0;j<c1;j++) 
                scanf("%d",&m1[i][j]); 
                 
        printf("enter the elements of matrix 2"); 
        for(i=0;i<r2;i++) 
            for(j=0;j<c2;j++) 
                scanf("%d",&m2[i][j]); 
 
        for(i=0;i<r1;i++) 
            for(j=0;j<c2;j++) 
            { 
                m3[i][j] = 0; 
                for(k=0;k<c1;k++) 
                    m3[i][j] = m3[i][j] + m1[i][k]*m2[k][j]; 
            } 
 
 
        printf("resultant matrix is \n"); 
        for(i=0;i<r1;i++) 
        { 
            for(j=0;j<c2;j++) 
                printf("%d\t",m3[i][j]); 
            printf("\n"); 
        } 
         
    } 
    else 
        printf("matrices can not be multiplied!!"); 
    return 0; 
}