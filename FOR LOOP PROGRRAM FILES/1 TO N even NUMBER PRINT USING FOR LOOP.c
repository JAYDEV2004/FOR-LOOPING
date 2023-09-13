#include<stdio.h>
int main()
{
	int a,n;
	
	printf("ENTER THE VLAUE = ");
	scanf("%d",&a);
	
	for(n=1;n<=a;n++)
	{
		if(n%2==0)
		printf("THIS NUMBER IS EVEN =%d\n",n);
	}
	
	return 0;
}