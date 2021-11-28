/*This is the simple program to convert the matrix to sparse matrix...
without using functions ~ Paul Thomas*/


#include <stdio.h>
int main()
{
    int a[10][10], b[10][3], row, column, i, j, k;
    printf("\nEnter the size of matrix (m x n): ");
    scanf("%d%d", &row, &column);

    printf("\nEnter elements of matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
   
    k = 1;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
        
    }
    b[0][0] = row;
    b[0][1] = column; 
    b[0][2] = k - 1;
    
    
    printf("\nSparse form - list of 3 triples\n\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
    return 0;
}
