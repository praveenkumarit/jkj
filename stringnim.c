#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    gets(a);
    if(a<='0' && a>='9')
    printf("yes");
    else
    printf("no");
}
