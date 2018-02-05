#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char a[10],j;
     int i; 
    gets(a);
 
    for(i=0;i<strlen(a);i++)
    {
        for(j='0';j<'9';j++)
        {
            if(j==a[i])
            printf("yes");
        printf("%c",a[i]);
        }
    }
        
    }
