#include <stdio.h>

int fact (int number)
{
	if (number == 1 || number == 0)
	{
		return 1;
	}
	else
	{
		return (number * fact (number - 1));
	}
}

int main ()
{
	int n;

	printf("Enter the Number : ");
	scanf("%d", &n);

	printf("Factorial = %d.", fact (n));

	return 0;
}