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
	char *s1;
	char str1[100];
	
	printf("Enter the string 1....");
	scanf("%s",str1);
	
	s1=str1;
 
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='A')&&(s1[i]<='Z'))
			s1[i]=s1[i]+32;
	}
 
	printf("Resultant string is...%s",s1);
	return 0;
}
