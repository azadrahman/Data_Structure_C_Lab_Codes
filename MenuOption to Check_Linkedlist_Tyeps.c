/* There are different option to check linked List for each option from
the menu bar.
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int value;
struct node *add;
};
void Insertion_Last_Position(struct node *head, int vv);
void Insertion_Specific_Position(struct node *head, int pp, int vv);
void Display_LinkedList(struct node *head);
void Deletion_Specific_Position(struct node *head, int pp, int vv);
int Count_node(struct node *head);
int main()
{
    int c,v,p,n;
    struct node *list;
    list= (struct node *)malloc(1*sizeof(struct node));
    list->value=0;
    list->add=NULL;
    while(1)
    {
        printf("\n............Menu............\n");
        printf("\nPress 0 for exit!!");
        printf("\nPress 1 for Insertion at last position!!");
        printf("\nPress 2 for Insertion at specific position!!");
        printf("\nPress 3 for Displaying the Linked List!!");
        printf("\nPress 4 for Deletion at specific position!!");
        printf("\nPress 5 for Count Nodes!!");
        printf("\nEnter your choice :");
        scanf("%d",&c);
        switch(c)
        {
            case 0: exit(0);
            break;
            case 1: printf("\n Choice = insertion at last position!!\n");
            printf("\nEnter new value for addition :\n");
            scanf("%d",&v);
            Insertion_Last_Position(list, v);
            printf("\nInserted Successfully!!\n");
            break;
            case 2: printf("\nChoice = Insertion at specific position!!\n");
                 if(list->add!=NULL){
                        n= Count_node(list);
           Level: printf("\nEnter position between %d to %d\n",1,n);
                 scanf("%d",&p);
                 if(p>=1 && p<=n){
               printf("\nEnter new value at position %d :",p);
                scanf("%d",&v);
                Insertion_Specific_Position(list,p, v);
                printf("\nInserted Successfully!!");
                 }
                 else{
                    printf("\nWrong position");
                    goto Level;
                 }
             }
             else
                printf("\nList is empty!!!");
             break;
           case 3: printf("\nChoice: Displaying the Linked List!!\n");
           if(list->add!=NULL)

               Display_LinkedList(list);
           else
                printf("\nList is empty\n");
           break;
           case 4: printf("\nChoice: Deletion at specific position!\n");
           if(list->add!=NULL)
           {
               n= Count_node(list);
        M:  printf("\nEnter position between %d to %d :",1, n);
               scanf("%d",&p);
               if(p>=1 && p<=n)
               {
                   Deletion_Specific_Position(list, p,v);
                   printf("\nDeleted successfully!!");
               }
               else{
                printf("\nWrong position!!\n");
                goto M;
               }
           }
                else
                    printf("\nList is empty!!!\n");
           break;
           case 5: printf("\nChoice: Counting Nodes\n");
               n=Count_node(list);
           printf("\nTotal nodes: %d\n",n);
           break;
           default: printf("\nWrong choice!!!\n");
        }
    }
}
void Insertion_Last_Position(struct node *head, int vv)
{
    struct node *temp;
    temp=(struct node *)malloc(1*sizeof(struct node));
    temp->value=vv;
    temp->add=NULL;
    while(head->add!=NULL)
        head=head->add;
    head->add=temp;
}
void Insertion_Specific_Position(struct node *head, int pp, int vv)
{
    struct node *temp;
    int i=0;
    while(head->add!=NULL){
        if(i==pp-1)
            break;
        head=head->add;
        i=i+1;
    }
    temp=(struct node *)malloc(1*sizeof(struct node));
    temp->value=vv;
    temp->add=head->add;
    head->add=temp;
}
void Display_LinkedList(struct node *head)
{
    while(head->add!=NULL)
    {
        printf("\t%d\t",head->add->value);
        head=head->add;
    }
}
void Deletion_Specific_Position(struct node *head, int pp, int vv)
{
    struct node *temp;
    int i=0;
    while(head->add!=NULL){
        if(pp-1==i)
            break;
            head=head->add;
            i=i+1;
    }
    temp=head->add;
    vv=temp->value;
    head->add=temp->add;
    free(temp);

}
int Count_node(struct node *head)
{
   int t=0;
   while(head->add!=NULL){
    t=t+1;
    head=head->add;
   }
   return t;
}
