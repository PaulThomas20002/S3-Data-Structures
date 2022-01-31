#include<stdio.h>
#include<stdlib.h>

struct node{
    int coef;
    int exp;
    struct node *next;
}node;

int main(){
    struct node *start=NULL, *current, *newnode;
    int term, i;
    printf("Number of Non zero number:");
    scanf("%d", &term);
    printf("Enter the non zero elements with starting the term with highest power....\n");
    for(i=0; i<term; i++){
        newnode = (struct node*) malloc(sizeof(struct node));
        newnode -> next = NULL;
        printf("Coefficient: ");
        scanf("%d", &newnode->coef);
        printf("Exponent : ");
        scanf("%d", &newnode->exp);
        if(start==NULL){
            start = newnode;
            current = newnode;
            
        }
        else{
            current->next =newnode;
            current = newnode;
            
        }
    }
    printf("The Polynomial is...\n");
    for(current=start; current!=NULL; current=current->next){
        if(current->exp==1){
            printf("%dx", current->coef);
        }
        else if(current->exp == 0 )
            printf("%d", current->coef);
        else
            printf("%dx^%d", current->coef, current->exp);
        if(current->next)
            printf("+");
        
    }
        
}
