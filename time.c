#include<stdio.h>
void main()
{
    int a,b,c,d,t1,t2,t3,t4,h,m;
    scanf("%d",&a);
    scanf("%d",&b);
    t1=a/60;
    t2=b/60;
    
    t3=a%60;
    t4=a%60;
   
    h=t1-t2;
    m=t3-t4;
    printf("%d",h+m);
}

