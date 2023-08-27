/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,len=0;
	char *s;
	char str1[100];
	
	printf("Enter the string....");
	scanf("%s",str1);
	s = str1;
	
	for(i=0;s[i]!='\0';i++)
		len++;
	printf("The lenth of the string is...%d",len);
	return 0;
}