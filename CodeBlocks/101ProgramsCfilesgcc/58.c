/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int n,rem;
	
	printf("Enter number...");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		switch(rem)
		{
			case 0 : printf("Zerro ");break;
			case 1 : printf("One   ");break;
			case 2 : printf("Two   ");break;
			case 3 : printf("Three ");break;
			case 4 : printf("Four  ");break;
			case 5 : printf("Five  ");break;
			case 6 : printf("Six   ");break;
			case 7 : printf("Seven ");break;
			case 8 : printf("Eigth ");break;
			case 9 : printf("Nine  ");break;
		}
		n=n/10;

	}
	return 0;
}