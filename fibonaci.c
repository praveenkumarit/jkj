#include<stdio.h>
int main
{
int a=0,b=1,i,n,c;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",a);
c=a+b;
a=b;
c=b;
}
return 0;
}
