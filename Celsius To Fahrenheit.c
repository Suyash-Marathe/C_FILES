#include <stdio.h>
int main ()

{
	float celsius, fahrenheit;
	
	printf("Enter The Temperature In Celsius : ");
	scanf("%f", &celsius);
	
	clrscr();
	printf("The Screen Has Been Cleared.\n");
	fahrenheit = (celsius * 9/5) + 32;
	
	printf("Temperature In Fahrenheit Is : %f", fahrenheit);
	
	return 0;
}
