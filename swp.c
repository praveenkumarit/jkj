#include<stdio.h>
void main()
{
int a,b,temp=0;
a=3;
b=2;
printf("%d %d",a,b);
temp=a;
a=b;
b=temp;
printf("%d %d",a,b);
}
