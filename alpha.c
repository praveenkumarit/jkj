#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
gets(a);
int b,i,l=0;
b=strlen(a);
for(i=0;i<=b;i++)
if(isalpha(a[i]))
l++;
printf("%d",l);
return 0;
}
