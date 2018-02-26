#include<stdio.h>
void main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        break;
    }
    if(i==a)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}


