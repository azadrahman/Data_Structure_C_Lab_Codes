/* choice option from Stack Menu and check their outputs.
*/
#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *link;
};
struct node *top= NULL, *temp;
void Push(int v);
void Pop();
void display();
int main()
{
    int c,v;
    while(1)
    {
        printf("\n............Menu............\n");
        printf("\nPress 0 for exit");
        printf("\nPress 1 for Push");
        printf("\nPress 2 for Pop");
        printf("\nPress 3 for Display");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 0: exit(0);
            break;
            case 1: printf("\nChoice= Push\n");
            printf("\nEnter new value: ");
            scanf("%d",&v);
            Push(v);
            printf("\nAdded Successfully...!");
            break;
            case 2: printf("\nChoice=Pop\n");
            if(top!=NULL)
                Pop();
            else
                printf("\nStack is empty...\n");
            break;
            case 3: printf("\nchoice=Display");
            if(top!=NULL)
                display();
            else
                printf("\nStack is empty....");
            break;
            default: printf("\nWrong choice");
        }
    }
}
void Push(int v)
{
    temp=(struct node *)malloc(1*sizeof(struct node));
    temp->data=v;
    temp->link=top;
    top=temp;
}
void Pop()
{
    temp=top;
    top=temp->link;
    printf("\nDeleted successfully= %d", temp->data);
    free(temp);
}
void display()
{
    temp=top;
    while(temp!=NULL){
        printf("\n%d",temp->data);
        temp=temp->link;
    }
}
