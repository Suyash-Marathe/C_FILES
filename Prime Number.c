#include<stdio.h>
int main ()
{
	int flag=1,i,n;
	printf("Enter The Number : ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n>0)
		{
			flag=0;
		}
		else
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("Entered Number Is Prime Number.");
	}
	else
	{
		printf("Entered Number Is Not Prime Number,");
	}
	return 0;
}
