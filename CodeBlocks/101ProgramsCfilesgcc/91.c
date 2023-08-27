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
		 if(s1[i]!=s2[i])
		{
			if(s1[i]>s2[i])
				printf("\nString 1 is greater...");
			else
				printf("\nString 2 is greater...");
			return 0;
			exit(0);
		}
	}
	printf("String are equal....");
	return 0;
}
