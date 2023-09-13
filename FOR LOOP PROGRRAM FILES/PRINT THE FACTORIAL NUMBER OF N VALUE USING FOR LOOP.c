#include<stdio.h>
int main()
{
	int a,n,factorial_number;
	
	printf("ENTER THE ANY NUMBER FOR FACTORIAL NUMBER \n= ");
	scanf("%d",&a);
	
	for(n=1,factorial_number=1;n<=a;n++)
	{
		factorial_number=factorial_number*n;
	}
	printf("FACTORIAL NUMBER OF %d IS %d ",a,factorial_number);
}