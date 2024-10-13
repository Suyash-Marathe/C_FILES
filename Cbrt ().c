#include <stdio.h>
#include <math.h>

int main ()

{
	int number;
	
	printf("Enter The Number : ");
	scanf("%d", &number);
	
	printf("Cube Root = %lf", cbrt (number) );
	
	return 0;
}
