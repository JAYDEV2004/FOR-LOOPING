#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER THE VALUE FOR MULTIPLICATION TABLE \n= ");
	scanf("%d",&a);
	printf("MULTIPLICATION TABLE FOR %d IS :",a);
	
	for(b=1;b<=10;b++)
	{
		printf("\n%d x %d = %d",a,b,(a*b));
	}
	
	return 0;
}