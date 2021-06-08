//Array2D
// Write A program to get transpose of any matrix.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int A[10][10],B[10][10],row,col,i,j;
    printf("Enter the number of row & column of Matrix:\n");
    scanf("%d %d",&row ,&col);
    printf("Enter the elements of the Matrix A (Row wise):\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&A[i][j]);
        
    }

    printf("Matrix A:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }

    Transpose:
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        B[j][i]=A[i][j];
    }

    printf("Transpose of Matrix A :\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        printf("%d ",B[i][j]);
        printf("\n");
    }

    return 0;
}
