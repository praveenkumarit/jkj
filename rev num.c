#include<stdio.h>
int main()
{
int n,r=0,sum;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
sum=n%10;
r=r*10+rem;
n=n/10;
}
printf("reverse is %d",r);
return 0;
}
