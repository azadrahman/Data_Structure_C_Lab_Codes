 /*3...print 2D array and display the matrix
  using user-define function. */
#include<stdio.h>
#include<conio.h>
//function declaration
void Display_Matrix(int aa[10][10], int rr, int cc);
int main()
{
    int a[10][10],i,j,r,c;
    printf("Enter numbers of rows and column: \n");
    scanf("%d%d",&r,&c);
    printf("Enter %dx%d matrix elements: \n",r,c);
    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    Display_Matrix(a,r,c);
    return 0;
}
//function definition
void Display_Matrix(int aa[10][10], int rr, int cc)
{
 int i,j;
 for(i=1; i<=rr; i++){
        printf("\n");
    for(j=1; j<=cc; j++)
        printf("%d\t",aa[i][j]);
 }
}
