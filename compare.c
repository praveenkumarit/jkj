#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
gets(a);
gets(b);
int i,j,s=0;
j=strlen(a);
for(i=0;i<=j;i++)
if(a[i]!=b[i])
s++;
if(s==1)
printf("yes");
else
printf("no");
return 0;
}
