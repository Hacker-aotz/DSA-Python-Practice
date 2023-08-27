/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include <stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("C:\\myfile.txt", "w");
 
    if (fp == NULL)
    {
       puts("An error occurred while opening the specified file");
    }
 
	printf("Enter your string:");

	gets(str);

	fputs(str, fp);

	fclose(fp);
 
    fp = fopen("C:\\myfile.txt", "r");
 
    if (fp == NULL)
    {
       puts("An error occurred while opening the specified file");
    }
 
    while(1)
    {
       if(fgets(str, 10, fp) ==NULL)
            break;
       else
            printf("%s", str);
    }
 
    fclose(fp);
    return 0;
}