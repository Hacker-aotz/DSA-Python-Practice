/*
Programs by kodegod.com
For more visit...
https://YouTube.com/kodegod
https://Instagram.com/kodegod
*/
#include<stdio.h>
#include<stdio.h>

int main()
{
	int n,r;

	printf("Enter number: ");

	scanf("%d",&n);

	while (n > 0)
    {
        r = n % 10;
        switch(r)
	{
		case 0 : printf("Zero ");break;
		case 1 : printf("One   ");break;
		case 2 : printf("Two   ");break;
		case 3 : printf("Three ");break;
		case 4 : printf("Four  ");break;
		case 5 : printf("Five  ");break;
		case 6 : printf("Six   ");break;
		case 7 : printf("Seven ");break;
		case 8 : printf("Eight ");break;
		case 9 : printf("Nine  ");break;
	}
	n = n / 10;
    }
	getch ();
	return 0;
}
