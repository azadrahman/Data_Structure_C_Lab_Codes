/* 1...Print single data to addition using user-defined function
*/
#include<stdio.h>
#include<conio.h>
//function declaration
int Addition(int x, int y);
//main body - calling function
int main(){
int a,b,c;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
c= Addition(a,b);
printf("Result : %d",c);
return 0;
}
//function definition
int Addition(int x, int y){
 int s;
 s=x+y;
 return s;
}
