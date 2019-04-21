//2... print 1D array and addition using user_defined function
#include<stdio.h>
#include<conio.h>
//function declaration
int OneD_Array_Addition(int aa[], int nn);
//main body - calling function
int main()
{
    int ar[10],i,c,n;
printf("How many elements in array :\n");
scanf("%d",&n);
printf("Enter %d elements of array:\n",n);
for(i=1; i<=n; i++)
    scanf("%d",&ar[i]);
    c= OneD_Array_Addition(ar,n);
    printf("Result : %d",c);

return 0;
}
//function definition
int OneD_Array_Addition(int aa[], int nn){
int i, s=0;
for(i=1; i<=nn; i++)
    s=s+aa[i];
    return s;
}
