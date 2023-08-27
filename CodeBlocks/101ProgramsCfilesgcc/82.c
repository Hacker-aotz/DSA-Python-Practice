/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
#include<ctype.h>

int main()
{
	char *s;
	char str1[100];
	int i,alphabets=0,digits=0,symbols=0;
	
	printf("Enter string : ");
	scanf("%s",str1);
	s=str1;
	
	for(i=0;s[i]!='\0';i++) 
		if(isalpha(s[i]))
			alphabets++;
		else if(isdigit(s[i]))
			digits++;
		else
			symbols++;
 
	printf("\nAphabets : %d",alphabets);
	printf("\nDigits   : %d",digits);
	printf("\nSymbols  : %d",symbols);
	return 0;
}
