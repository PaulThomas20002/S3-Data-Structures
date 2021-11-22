#include <stdio.h>
#include <stdlib.h>
int main() {
 printf("Hello World\n");//deault test 0
 int a[20], p ,e, n, d , j;
 printf("Enter the size of array : ");
 scanf("%d", &n);
 printf("Enter the elements");
 for(int i=0; i<n; i++)
   scanf("%d", &a[i]);
 do{
   printf("Menu \n");
   printf("1. Insert element \n2. Delete element \n3. Display elements \n4. Exit \n");
   scanf("%d", &d);
   switch(d){
     case 1 : printf("Enter the position to insert : ");
              scanf("%d", &p);
              printf("Enter the element to enter : ");
              scanf("%d", &e);
              for(j=n-1; j>=p-1;j--)
                 a[j+1]=a[j];
             a[p-1]=e;
             n++;
             
             break;
     case 2 : printf("Enter the element to delete : ");
              scanf("%d", &e);
              for(j=0;j<n;j++)
                if(a[j]==e){
                  p=j;
                  break;
                }
              for(j=p;j<n;j++)
                a[j]=a[j+1];
              n--;
              break;
     case 3 : printf("Array \n");
              for(j=0; j<n; j++)
                 printf("%d\t", a[j]);
              printf("\n*********\n");
             break;
     case 4 : exit(0);
     default: printf("Invalid Input");
 
   }
 }while(d!=4);
 return 0;
}

