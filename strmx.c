#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int c,d;
    c=strlen(a);
    d=strlen(b);
    {
        if(c>=d)
        printf("%s",a);
        else
        printf("%s",b);
    
    }
}
