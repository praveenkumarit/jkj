#include<stdio.h>
void main()
{
int i,n,a=0;
scanf("%d",&n);
while(n!=0)
{
n=n/10; 
a++;
}
printf("%d",a);
}

