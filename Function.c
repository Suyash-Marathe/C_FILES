#include <stdio.h>

void sum_of_numbers(int number_1, int number_2)

{
	
	int add = number_1 + number_2;
	int sub = number_1 - number_2;
	int mul = number_1 * number_2;
	int div = number_1 / number_2;
	int rem= number_1 % number_2;
	
	printf("\nAddition Of %d And %d Is %d.", number_1, number_2, add);
	printf("\nSubstraction Of %d And %d Is %d.", number_1, number_2, sub);
	printf("\nMultiplication Of %d And %d Is %d.", number_1, number_2, mul);
	printf("\nDivision Of %d And %d Is %d.", number_1, number_2, div);
	printf("\nRemainder Of %d And %d Is %d.", number_1, number_2, rem);
}

int main ()

{
	
	sum_of_numbers(4, 4);
	
	return 0;
}