/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
 
struct Date
{
	int mm,dd,yy;
};
 
struct Employee
{
	char name[50];
	int emp_id;
	struct Date DOB,DOJ;
};
 
int main()
{   int i;
	struct Employee e;
	
	printf("\nEnter name           : ");
	scanf("%s", &e.name);
	printf("\nEnter emp_id.        : ");
	scanf("%d", &e.emp_id);
	printf("\nEnter Date of Joining\n ");
	printf("(dd-mm-yy) : ");
	scanf("%d-%d-%d", &e.DOJ.dd, &e.DOJ.mm, &e.DOJ.yy);
	printf("\nEnter Date of birth\n ");
	printf("(dd-mm-yy) : ");
	scanf("%d-%d-%d", &e.DOB.dd, &e.DOB.mm, &e.DOB.yy);

	printf("\nName           : %s",e.name);
	printf("\nEmployee ID    : %d",e.emp_id);
	printf("\nEnter DOJ      : %d-%d-%d", e.DOJ.dd,e.DOJ.mm,e.DOJ.yy);
	printf("\nEnter DOB      : %d-%d-%d", e.DOB.dd,e.DOB.mm,e.DOB.yy);
 
	return 0;
}