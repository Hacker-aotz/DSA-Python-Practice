/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i;
	char str1[100],str2[100];
	
	printf("Enter the string 1....");
	scanf("%s",str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("The copied string is...%s",str2);
	return 0;
}