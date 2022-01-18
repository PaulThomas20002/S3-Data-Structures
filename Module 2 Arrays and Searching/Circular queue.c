//program to implement circular queue

#include <stdio.h>
int cq[5],front=-1,rear=-1,item;    //cq - array using as circular queue
const int max = 5;

/*setting value of array size into maz
if we need to change size of queue later ,we only need to change size of array
 and value of max,no need to make other changes in program*/


void enqueue()      //funtion for enqueue
{
    if (front == (rear+1)%max)      //checkig whether queue is full
    {
        printf("Queue Overflow.");
    }
    else if(rear == -1)           //checkig whether queue is empty
    {
        front = 0;
        rear = 0;
        printf("Enter the elements to insert : ");
        scanf("%d",&item);
        cq[rear] = item;
    }
    else
    {
        printf("Enter the elements to insert : ");
        scanf("%d",&item);
        rear = (rear+1)%max;      //setting rear to available space
        cq[rear] = item;
    }
}
void dequeue()                      //funtion for dequeue
{
    if(front == -1)                   //checkig whether queue is empty
    {
        printf("Queue Underflow.");
    }
    else
    {
            printf("Deleted item : %d",cq[front]);
            front == (front+1)%max;
            if (front == rear)                //checkig whether deleted element is last element
            {
                front = -1;                   //setting queue empty to empty condition
                rear = -1;
            }
    }
}
void print()
{
    if (front == -1)                          //checkig whether queue is empty
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("Items in queue : ");
        for(int i = front;i<= rear;i++)
        {
            printf("%d  ",cq[i]);
        }
    }
}
int main()
{
    char opt,opt2;
    do
    {
        begin ://label for goto
        printf("Enqueue - A\nDenqueue - B\nDisplay - C\n");
        printf("Enter an option : ");
        scanf(" %c",&opt);
        if(opt == 'a' || opt == 'A' )
        {
            enqueue();
        }
        else if(opt == 'b' || opt == 'B' )
        {
            dequeue();
        }
        else if(opt == 'c' || opt == 'C' )
        {
            print();
        }
        else
        {
            printf("Invalid option.Retry,\n");
            goto begin;
        }
        printf("\nDo you want to continue (Yes - y & No - N) : ");
        scanf(" %c",&opt2);
    } while (opt2 == 'y' || opt2 == 'Y' );
    return 0;
}
/*Credits : KTUCodes*/
