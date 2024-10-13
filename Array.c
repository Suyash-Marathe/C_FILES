#include <stdio.h>

int main ()

{
	int a[5];
	
	printf("Enter The Numbers : ");
	for (int i=1; i<=5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("\n\nAddition = %d", a[2] + a[4]);
	printf("\nSubstraction = %d", a[2] - a[4]);
	printf("\nMultiplication = %d", a[2] * a[4]);
	printf("\nDivision = %d", a[2] / a[4]);
	printf("\nRemainder = %d", a[2] % a[4]);
	
	return 0;
}