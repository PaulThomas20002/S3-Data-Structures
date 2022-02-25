#include <stdio.h>
int main()
{
    int arr[] = {4, 6, 1, 5, 7};

    for (int i = 0; i < 5 - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = min;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}