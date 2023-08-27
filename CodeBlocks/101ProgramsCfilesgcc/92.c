/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,vowel=0;
	char *s;
	char str1[100];
	
	printf("Enter the string 1....");
	scanf("%s",str1);
	
	s=str1;
 
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]=='A')||(s[i]=='E')||(s[i]=='O')||(s[i]=='U')||(s[i]=='I')||
		  (s[i]=='a')||(s[i]=='e')||(s[i]=='o')||(s[i]=='u')||(s[i]=='i'))
			vowel++;
	}
	printf("\nVowels : %d",vowel);
	return 0;
}
