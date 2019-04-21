/* Take some elements of array as input and check various
option to your choice with make a menu chart and display them.
*/
#include<stdio.h>
#include<stdlib.h>
//function declaration section:
int Insertion_Last_Position(int aa[], int nn, int vv);
int Insertion_Specific_Position(int aa[], int nn, int vv, int pp);
void Display_Array(int aa[], int nn);
int Deletion_Specific_Position(int aa[], int nn, int pp);
void Linear_search(int aa[], int nn, int vv);
void Bubble_Sort(int aa[], int nn);
void Binary_Search(int aa[], int nn, int vv);
//main body or calling- function:
int main()
{
    int a[100],n,i,c,v,p;
    printf("Enter how many elements in array:\n");
    scanf("%d",&n);
    printf("\nEnter %d elements as input: \n",n);
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    while(1)
    {
        printf("\n.......................Menu....................\n");
        printf("\n press 0 for exit\n");
        printf("\n press 1 for insertion at last position\n");
        printf("\n press 2 for insertion at specific position\n");
        printf("\n press 3 for display array\n");
        printf("\n press 4 for deletion at specific position\n");
        printf("\n press 5 for Linear search\n");
        printf("\n press 6 for bubble sort\n");
        printf("\n press 7 Binary search\n");
        printf("\nEnter your choice :\n");
        scanf("%d",&c);
        switch(c)
        {
            case 0: exit(0);
            break;
            case 1: printf("\nInsertion at last position: \n");
                printf("\n Enter new value for insertion at last position:\n");
                scanf("%d",&v);
                n= Insertion_Last_Position(a,n,v);
                printf("\nInserted successfully!\n");
            break;
            case 2: printf("\nInsertion at specific position: \n");
                Level: printf("\n Enter position between %d to %d:\n",1,n);
                scanf("%d",&p);
                if(p>=1 && p<=n){
                  printf("\nEnter new value at position %d:\n",p);
                  scanf("%d",&v);
                n= Insertion_Specific_Position(a,n,v,p);
                printf("\nInserted successfully! at position: %d\n",p);}
                else {
                    printf("\nInvalid position!!\n");
                    goto Level;
                }
            break;
            case 3: printf("\nDisplay array: \n");
                Display_Array(a,n);
            break;
            case 4: printf("\nDeletion at specific position: \n");
            M: printf("\nEnter position between %d to %d \n",1,n);
            scanf("%d",&p);
            if(p>=1 && p<=n){
                v=a[p];
                n= Deletion_Specific_Position(a,n,p);
                printf("\nDelete successfully %d from position %d\n",v,p);
            }
            else{
                printf("\nWrong position");
                goto M;
            }
            break;
            case 5: printf("\nLinear search: \n");
                printf("\nEnter value for searching..... \n");
                scanf("%d",&v);
                Linear_search(a,n,v);
            break;
            case 6: printf("\nBubble sort: \n");
            Bubble_Sort(a,n);
            printf("\n Sorted successfully!!\n");
            break;
            case 7: printf("\nBinary Search: \n");
            printf("Enter value for searching....\n");
            scanf("%d",&v);
            //Bubble_Sort(a,n);
            Binary_Search(a,n,v);
            break;
            default:
                printf("\nWrong input!!\n");
                break;
        }
    }
   return 0;
}
//function definition section:
void Display_Array(int aa[], int nn)
{
    int i;
    for(i=1; i<=nn; i++)
        printf("\n %d",aa[i]);
}
int Insertion_Last_Position(int aa[], int nn, int vv)
{
    aa[nn+1]=vv;
    return nn+1;
}
int Insertion_Specific_Position(int aa[], int nn, int vv, int pp)
{
    int i;
    for(i=nn; i>=pp; i--){
        aa[i+1]=aa[i];
        aa[pp]=vv;
    }
    return nn+1;
}
int Deletion_Specific_Position(int aa[], int nn, int pp)
{
    int i;
    for(i=pp; i<nn; i++){
        aa[i]=aa[i+1];
    }
    return nn-1;
}
void Linear_search(int aa[], int nn, int vv)
{
    int i, c=0;
    for(i=1; i<=nn; i++){
        if(vv==aa[i]){
            printf("\nFound at position: %d\n",i);
        c=c+1; }
    }
    printf("\nTotal search value %d found: %d\n",vv,c);
}
void Bubble_Sort(int aa[], int nn)
{
    int i,j,temp;
    for(i=1; i<nn; i++){
        for(j=1; j<=nn-i; j++){
            if(aa[j]>aa[j+1]){
                temp=aa[j];
                aa[j]=aa[j+1];
                aa[j+1]=temp;
            }
        }
    }
}
void Binary_Search(int aa[], int nn, int vv)
{
    int mid, beg, end;
    Bubble_Sort(aa,nn);
    beg=1;
    end=nn;
    do{
        mid=(beg+end)/2;
        if(vv<aa[mid])
            end=mid-1;
        else if(vv>aa[mid])
            beg=mid+1;
    }
    while(vv!=aa[mid] && beg<=end);
    if(vv==aa[mid])
        printf("\nFound!!!\n");
    else
        printf("\nNot found!!\n");
}
