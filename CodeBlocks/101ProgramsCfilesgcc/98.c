/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
    FILE *fp;   /* file pointer*/
    char fName[20];
    char ch;
 
    printf("\nEnter file name to create :");
    scanf("%s",fName);
 
    fp = fopen(fName,"w");
    if(fp==NULL)
    {
        printf("File not created !!");
        exit(0); 
    }
 
    printf("File created successfully.");
    /*writing into file*/
    printf("\nEnter text to write (press < enter > to save & quit):\n");
    while( (ch = getchar())!='\n')
    {
        putc(ch, fp); /*write character into file*/
    }
 
	/*again open file to read data*/
    fp = fopen(fName,"r");
    if(fp==NULL)
    {
        printf("\nCan't open the file!!!");
        exit(0);
    }
 
    printf("\nContents of file is :\n");
    /*read text until, end of file is not detected*/
    while( (ch=getc(fp))!=EOF )
    {
        printf("%c",ch); /*print character on screen*/
    }
 
    fclose(fp);
    return 0;
}