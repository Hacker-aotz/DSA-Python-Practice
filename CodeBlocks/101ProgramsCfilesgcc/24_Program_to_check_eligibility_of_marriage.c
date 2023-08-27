/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
   int age;
   char MaritalStatus,Gender;
   
 printf("Enter MaritalStatus, Gender, Age : (e.g. m,f,25) : ");
   scanf("%c,%c,%d",&MaritalStatus,&Gender,&age);
   if(MaritalStatus=='m')
   {
		printf("Driver is Insured !!!");
   }
   else if(MaritalStatus=='u')
   {
		if(Gender=='m')
		{
			if(age>=30)
			    printf("Insured !!!");
			else
			    printf("Not Insured !!!");
		}
		else if(Gender=='f')
		{
			if(age>=18)
			    printf("Insured !!!");
			else
			    printf("Not Insured !!!");
		}
		else
		      printf("Invalid input Gender");
   }
   else
printf("Invalid input Marital Status ");
   return 0;
}