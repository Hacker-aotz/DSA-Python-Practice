/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
#include<string.h>

char *strrev(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

char *strupr(char *str)
{
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]>= 'a' && str[i] <= 'z')
        {
			str[i]=str[i]-32;
        }
        else{
			str[i]=str[i];
        }    
    }
	
    return str;
}

char *strlwr(char *str)
{
    for(int i=0; str[i] != '\0'; i++)
    {
		if(str[i]>= 'A' && str[i] <= 'Z')
		{
			str[i]=str[i]+32;
		}
		else
		{
			str[i]=str[i];
		}    
    }
	
    return str;
}

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
}