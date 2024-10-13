#include <stdio.h>

int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
int div (int a, int b);
int rem (int a, int b)

{
	return (a, b);
}

int main ()

{
	int a, b;
	
	printf("Enter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of B : ");
	scanf("%d", &b);
	
	int add = (a + b);
	printf("\nAddition Of A And B = %d", add);
	
	int sub = (a - b);
	printf("\nSubstraction Of A And B = %d", sub);
	
	int mul = (a * b);
	printf("\nMultiplication Of A And B = %d", mul);
	
	int div = (a / b);
	printf("\nDvision Of A And B = %d", div);
	
	int rem = (a % b);
	printf("\nRemainder Of A And B = %d");
	
	return 0;
}
