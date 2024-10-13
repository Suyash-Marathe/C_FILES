#include <stdio.h>
int main ()

{
	float a[5];
	
	printf("Enter The Numbers : ");
	for (int i=0; i<=4; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int add = a[2] + a[4];
	printf("\nAddition Of %d And %d = %d", a[2], a[4], add);
	
	int sub = a[2] - a[4];
	printf("\nSubstraction Of %d And %d = %d", a[2], a[4], sub);
	
	int mul = a[2] * a[4];
	printf("\nMultiplication Of %d And %d = %d", a[2], a[4], mul);
	
	int div = a[2] / a[4];
	printf("\nDivision Of %d And %d = %d", a[2], a[4], div);
	
	int rem = a[2] % a[4];
	printf("\nRemainder Of %d And %d = %d", a[2], a[4], rem);
	
	return 0;
}