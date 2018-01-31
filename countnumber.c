#include<stdio.h>
int main()
{
int n,a,s=0;
scanf("%d",&n);
a=n;
while(n!=0)
{
n=n/10;
s++;
}
printf("%d",s);
return 0;
}
