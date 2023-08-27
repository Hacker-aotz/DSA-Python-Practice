/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
 
struct Employee
{
	char name[50];
	int emp_id;
	long phone_no;
};
 
int main()
{
	struct Employee e;
	
	printf("Enter name : ");
	scanf("%s", &e.name);
	printf("Enter emp_id: ");
	scanf("%d", &e.emp_id);
	printf("Enter Phone Number: ");
	scanf("%ld", &e.phone_no);
 
	printf("\n\nEnter name : %s",e.name);
	printf("\n\nEnter Emp Id       : %d",e.emp_id);
	printf("\n\nEnter Phone Number : %ld ",e.phone_no);
 
	return 0;
}