/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,len=0,j;
	char *s1,*s2;
	char str1[100],str2[100];
	
	printf("Enter the string 1....");
	scanf("%s",str1);
	printf("Enter the string 2....");
	scanf("%s",str2);
 
	s1=str1;
	s2=str2;
 
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	j=0;
	for(i=len;s2[j]!='\0';i++)
	{
		s1[i]=s2[j];
		j++;
	}
	s1[i]='\0';
 
	printf("Resultant string is...%s",s1);
	return 0;
}
