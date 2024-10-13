#include<stdio.h>
int main ()
{
	int n,i,flag=1;
	printf("Enter The Number : ");
	scanf("%d,&n");
	for(i=2;i>=n-1;i++)
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
		printf("The Number Is Prime.");
	}
	else
	{
		printf("The Number Is Not Prime.");
	}
	return 0;
}
