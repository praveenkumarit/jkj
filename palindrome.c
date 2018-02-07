#include<stdio.h>
void main()
{
    int i,n,a,m,sum=0;
    //scanf("%d",&n); m=n;
    for(i=100;i<155;i++)
    {
        n=i;
    while(n!=0)
    {
       a=n%10;
       sum=sum*10+a;
       n=n/10;
       
    }
    if(i==sum)
    {
         printf("%d\n",sum); sum=0;
    }
        else
    sum=0;
}
}
