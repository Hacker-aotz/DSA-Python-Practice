/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
 float SI,P,N,R;
 
 printf("Enter values of P, N and R: ");
 scanf("%f%f%f",&P,&N,&R);
 SI=(P*N*R)/100;
 printf("Simple interest = : %6.2f",SI);
 return 0;
}