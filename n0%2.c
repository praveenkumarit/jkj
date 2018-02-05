#include<stdio.h>
int main()
{
int i,a[10],n,l;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
   
       for(i=1;i<=n;i++)
  {
   if(a[i]/2==0)
   {
       l=n/2;
   }
   printf("%d",l);
  }
  return 0;
}
}
