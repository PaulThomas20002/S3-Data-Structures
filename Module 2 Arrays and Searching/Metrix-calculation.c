#include <stdio.h>
#include <string.h>
///calling tthe functions
void display(int arr[100][100], int row, int col)
{
    printf("output is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
}
//function for addition
void add(int arrO[100][100], int arrT[100][100], int row, int col)
{
    int sum[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = arrO[i][j] + arrT[i][j];
        }
    }
    display(sum, row, col);
}
//function for substarction
void sub(int arrO[100][100], int arrT[100][100], int row, int col)
{
    int sub[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sub[i][j] = arrO[i][j] - arrT[i][j];
        }
    }
    display(sub, row, col);
}
//function for multiplication
void mul(int arrO[100][100], int arrT[100][100], int row, int col)
{
    int mul[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mul[i][j] = arrO[i][j] * arrT[i][j];
        }
    }
    display(mul, row, col);
}
//function for transpose
void tran(int arrO[100][100], int arrT[100][100], int row, int col)
{
    int tranO[100][100];
    int tranT[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tranO[i][j] = arrO[j][i];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tranT[i][j] = arrT[j][i];
        }
    }
    //diplaying the trasnpose
    display(tranO, row, col);
    printf("\n");
    printf("\n");
    printf("second metrix transpose\n");
    display(tranT, row, col);
}
int main()
{
    int arrOne[100][100];
    int arrTwo[100][100];
    int sum[100][100];
    printf("enter the number of rows \n");
    int row;
    scanf("%d", &row);
    printf("enter the number of cols \n");
    int col;
    scanf("%d", &col);
    printf("enter the values of first metrixs\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arrOne[i][j]);
        }
    }
    printf("enter the values of second metrixs\n");
    for (int k = 0; k < row; k++)
    {
        for (int x = 0; x < col; x++)
        {
            scanf("%d", &arrTwo[k][x]);
        }
    }
    printf("enter the mode of operation ? \n");
    printf("add : 1  \n");
    printf("sub : 2 \n");
    printf("multiply : 3  \n");
    printf("transpode : 4\n");
    //getting the values
    int op;
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        add(arrOne, arrTwo, row, col);
        break;
    case 2:
        sub(arrOne, arrTwo, row, col);
        break;
    case 3:
        mul(arrOne, arrTwo, row, col);
        break;
    case 4:
        tran(arrOne, arrTwo, row, col);
        break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}