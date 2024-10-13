#include <stdio.h>
int main ()

{
	int i, n, flag=1;
	
	printf("Enter The Number : ");
	scanf("%d", &n);
	
	if (n == 1)
	{
		flag=1;
	}
	else
	{
		for (i=2; i<=n-1; i++)
		{
			if (n % i == 0)
			{
				flag=0;
				break;
			}
		}
	}
	
	if (flag == 1)
	{
		printf("Entered Number Is Prime.");
	}
	else
	{
		printf("Entered Number Is Not Prime.");
	}
	
	return 0;
}
