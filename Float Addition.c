#include <stdio.h>
int main ()

{
	float number1, number2, addition;
	
	printf("Enter The First Number : ");
	scanf("%f", &number1);
	
	printf("Enter The Second Number : ");
	scanf("%f", &number2);
	
	addition = number1 + number2;
	
	printf("\nAddition Of %f And %f Is = %f",number1, number2, addition);
	
	return 0;
}