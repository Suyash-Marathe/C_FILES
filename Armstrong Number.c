#include<stdio.h>
int main ()
{
	int r,n,sum=0,temp;
	printf("Enter The Number : ");
	scanf("%d",&n);
	temp=n;
	if(n>0)
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Entered Number Is Armstrong.");
	}
	else
	{
		printf("Entered Number Is Not Armstrong.");
	}
	return 0;
}
