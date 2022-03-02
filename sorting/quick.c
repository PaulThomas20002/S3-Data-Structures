// #include <stdio.h>
// int part(int a[], int first, int last);
// int main()
// {
// }

// int part(int a[], int first, int last)
// {
//     int pivot = a[last];
//     int j = a[first - 1];

//     for (int i = first; i < last - 1; i++)
//     {
//         if (a[i] < pivot)
//         {
//             i++;
//             int temp = a[j];
//             a[j] = a[i];
//             a[i] = temp;
//         }
//     }
//     int temp = a[j + 1];
//     a[j + 1] = a[last];
//     return j + 1;
// }
