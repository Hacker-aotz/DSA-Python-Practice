/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,alphabets=0,digits=0,symbols=0;
	char *s;
	char str1[100];
	
	printf("Enter the string 1....");
	scanf("%s",str1);
	
	s=str1;
 
	for(i=0;s[i]!='\0';i++)
	{
		 if(((s[i]>='A')&&(s[i]<='Z'))||((s[i]>='a')&&(s[i]<='z')))
			alphabets++;
		 else if((s[i]>='0')&&(s[i]<='9'))
			digits++;
		 else
			symbols++;
	}
	printf("\nAlphabets : %d",alphabets);
	printf("\nDigits    : %d",digits);
	printf("\nSymbols   : %d",symbols);
	return 0;
}