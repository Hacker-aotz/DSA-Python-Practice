/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
 int RollNumber,m1,m2,m3,total;
 float avg;
 
 printf("Enter Roll Number : ");
 scanf("%d",&RollNumber);
 printf("Enter marks for three subjects : ");
 scanf("%d%d%d",&m1,&m2,&m3);
 total=m1+m2+m3;
 avg=total/3.0;
 printf("\nTotal is....... %d",total);
 printf("\nAverage is..... %5.2f %",avg);
 if(avg>=60)
	printf("\nGrade : A");
else if((avg>=50)&&(avg<60))
	printf("\nGrade : B");
 else if((avg>=40)&&(avg<50))
	printf("\nGrade : C");
 else
	printf("\nGrade : F");
 return 0;
}