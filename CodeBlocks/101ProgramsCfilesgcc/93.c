/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,j,len=0;
	char str1[100],str2[100];
	
	printf("Enter the string ....");
	scanf("%s",str1);
	
	for(i=0;str1[i]!='\0';i++)
		len++;
	j=0;
	for(i=len-1;i>=0;i--)
	{
		str2[j]=str1[i];
		j++;
	}
	str2[j]='\0';
	printf("\nReversed String : %s",str2);
	return 0;
}