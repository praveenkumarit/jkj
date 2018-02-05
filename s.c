#include<stdio.h>

int main()
{
    int a,b,c,i,sum=0;
    scanf("%d",&a);
        scanf("%d",&b);
            scanf("%d",&c);
            for(i=a;i<=c;i=i+b)
            {
                sum=sum+i;
                
            }
            printf("%d",sum);
            return 0;
}
