#include<stdio.h>
int main()
{
	int a,n;
	
	printf("ENTER THE VALUE = ");
	scanf("%d",&a);
	
	for(n=1;n<=a;n++)
	{
		if(n%2==1)
		printf("THIS VALUE IS ODD = %d\n",n);
	}
	return 0;
}