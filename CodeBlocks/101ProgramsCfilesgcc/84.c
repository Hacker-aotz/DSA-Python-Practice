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

	printf("\nConcatinated string is...%s",strcat(s1,s2));
	return 0;
}
