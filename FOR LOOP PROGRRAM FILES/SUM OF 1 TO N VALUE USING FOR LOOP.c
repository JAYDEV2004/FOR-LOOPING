#include<stdio.h>
int main()
{
	int a,n,sum;
	printf("enter the value = ");
	scanf("%d",&a);
	for(a,n=1,sum=0;n<=a;n++)
	printf("%d",n);
	sum=sum+n;
	printf("\nSUM OF ALL VALUE WITH YOUR FAVOURITE VALUE = %d",sum);
}