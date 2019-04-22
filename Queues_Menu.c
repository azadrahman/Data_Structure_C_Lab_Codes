//choice option to check their outputs from queues_Menu
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void Insertion(struct node *f, struct node *r, int vv);
void Display(struct node *f);
int main()
{
    struct node *front, *rear;
    int c, v;
    front=(struct node *)malloc(sizeof(struct node));
    rear=(struct node *)malloc(sizeof(struct node));
    front->data=0;
    front->next=NULL;
    rear->data=0;
    rear->next=NULL;
     while(1)
    {
        printf("\n............Menu............\n");
        printf("\nPress 0 for exit");
        printf("\nPress 1 for Insertion");
        printf("\nPress 2 for Display");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 0: exit(0);
            break;
            case 1: printf("\nChoice= Insertion Queues\n");
            printf("\nEnter new value: ");
            scanf("%d",&v);
            Insertion(front, rear, v);
            printf("\nInserted Successfully...!");
            break;
            case 2: printf("\nchoice=Display Queues\n");
            if(front->next!=NULL)
                Display(front);
            else
                printf("\nQueue is empty...\n");
            break;
            default: printf("\nWrong choice");
        }
    }
}
void Insertion(struct node *f, struct node *r, int vv)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->data=vv;
  temp->next=NULL;
  if(f->next==NULL){
    f->next=temp;
    r->next=temp;}
    else{
        r->next->next=temp;
        r->next=temp;
    }
  }

void Display(struct node *f)
{
    while(f->next!=NULL){
        printf("\t%d\t",f->next->data);
        f=f->next;
    }
}
