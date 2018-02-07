#include<stdio.h>
void main()
{
    int a=0,j,i;
    

    for(j=3;j<=10;j++)
    {
    for(i=2;i<=j-1;i++)
    {
        if(j%i==0)
        {
        a++;
        break; }
    }
    if(a==0)
    {
        printf("%d\n",j);
    }
    else
    a=0;
    }
    
    
}
