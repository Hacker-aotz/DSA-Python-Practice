#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{


    char str1[100],str2[100];
    char *p1;

    printf("Enter a string 1: ");
    scanf("%s",str1);
    p1 = str1;

    printf("Reverse String : %s\n",strrev(p1));
    printf("Lenght: %d\n",strlen(p1));
    printf("String in UPPER CASE : %s\n",strupr(p1));
    printf("String in lower case : %s\n",strlwr(p1));
    strcpy(str2,str1);
    printf("\nCopied string is...%s",str2);
    return 0;



    getch();
    return 0;
}
