/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
  int i,j;
  
	printf("╔");
	for(i=2;i<=79;i++)
		printf("═");
	printf("╗");
	for(i=2;i<=24;i++)
	{
		printf("║");
		for(j=2;j<=79;j++)
		  printf(" ");
		  printf("║");        
	}
	printf("╚");
	for(i=2;i<=79;i++)
		printf("═");
	
	printf("╝");
  
  return 0;
}
