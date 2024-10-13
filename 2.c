#include <stdio.h>
#include <math.h>

int main ()

{
	int snumber, cnumber;

	printf("Enter The Number : ");
	scanf("%d", &snumber);

	printf("Enter The Number : ");
	scanf("%d", &cnumber);

	printf("Square Root = %lf", sqrt (snumber));

	printf("\nCube Root = %lf", cbrt (cnumber));

	return 0;
}
