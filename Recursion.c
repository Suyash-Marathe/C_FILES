#include <stdio.h>

int factorial(int number)
{
	if (number == 0 || number == 1)
	{
		return 1;
	}
	else
	{
		return (number * factorial(number - 1));
	}
}

int main ()
{
	int n;
	
	printf("Enter The Number : ");
	scanf("%d", &n);
	
	printf("Factorial Of %d Is %d.", n, factorial(n));
	
	return 0;
}