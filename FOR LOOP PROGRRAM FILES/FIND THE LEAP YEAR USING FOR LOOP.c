#include<stdio.h>
int main()
{
	int a;
	
	printf("ENTER THE ANY YEAR BETWEEN THE 2000 TO 3000 YEAR FO FINDING THE LEAP YEAR \n=");
	scanf("&d",a);
	
	for(a=2000;a<=3000;a++)
	{
		if(a%4==0)
		printf("THIS IS THE LEAP YEAR = %d\n",a);
	}
	return 0;
}