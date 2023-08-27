/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
#include<string.h>

int main()
{
	char *s1,*s2;
	char str1[100],str2[100];
	
	printf("Enter string 1 : ");
	scanf("%s",str1);
	printf("Enter string 2 : ");
	scanf("%s",str2);
 
	s1 = str1;
	s2 = str2;
	if(strcmp(s1,s2)>0)
		printf("\nString 1 is greater..");
	else if(strcmp(s1,s2)<0)
		printf("\nString 2 is greater..");
	else
		printf("\nStrings are equal..");
 
	return 0;
}