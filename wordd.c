#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int l=0,s,i;
    s=strlen(a);
    for(i=0;i<=s;i++)
        if(isspace(a[i]))
      
        l++;
    printf("%d",l);
       
    
    return 0;
    
}
