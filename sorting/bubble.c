#include <stdio.h>

int ar[] = {1, 4, 3, 7};

int main()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3 - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i <= 3; i++)
    {
        printf("%d\n", ar[i]);
    }
}
