#include <stdio.h>
int main() 
{
	int a,b;
	printf("\nEnter the number ");
	scanf("%d,%d",&a,&b);
  a=a^b;
	b=a^b;
	a=b^a;
	printf("\nBefore swapping %d",a);
	printf("\nAfter swappping %d",b);
	return 0;
}
