#include<stdio.h>
int stack[100],ch,n,top,item,i;
void push(){
    if(top>=n-1){
        printf("\n\t STACK overflow");
    }
    else{
        printf(" Enter a value to be pushed:");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop(){
    if(top<=-1){
        printf("\n\t Stack underflow");
    }
    else{
        printf("\n\t The POPPPED elements is %d",stack[top]);
        top--;
    }
}
void display(){
    if(top>=0){
        printf("\n\t The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else{
        printf("\n\t The STACK is empty");
    }
   
}

int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t Stack implementation using array");
    
    do
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t Operation Aborting..... ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(ch!=4);
    return 0;
}
