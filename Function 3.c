#include <stdio.h>

void addition(int number_1, int number_2)

{
	
	int additon = number_1 + number_2;
	
	printf("\n\nAddition Of %d And %d Is %d.", number_1, number_2, additon);
}

void substraction(int number_1, int number_2)

{
	
	int substraction = number_1 - number_2;
	
	printf("\nSubstraction Of %d And %d Is %d.", number_1, number_2, substraction);
}

void multiplication(int number_1, int number_2)

{
	
	int multiplication = number_1 * number_2;
	
	printf("\nMultiplicatipn Of %d And %d Is %d.", number_1, number_2,  multiplication);
}

void division(int number_1, int number_2)

{
	
	int division = number_1 / number_2;
	
	printf("\nDivision Of %d And %d Is %d.", number_1, number_2, division);
}

void remainder(int number_1, int number_2)

{
	
	int remainder = number_1 % number_2;
	
	printf("\nRemainder Of %d And %d Is %d.", number_1, number_2, remainder);
}


int main ()

{
	
	addition(4, 8);
	substraction(2, 6);
	multiplication(6, 8);
	division(9, 5);
	remainder(7, 3);
	
	addition(3, 5);
	substraction(5, 9);
	multiplication(6, 8);
	division(7, 6);
	remainder(3, 5);
	
	addition(4, 8);
	substraction(2, 6);
	multiplication(6, 8);
	division(9, 5);
	remainder(7, 3);
	
	addition(3, 5);
	substraction(5, 9);
	multiplication(6, 8);
	division(7, 6);
	remainder(3, 5);


	return 0;
	
}