#include <stdio.h>
#include <math.h>

int main ()

{
	int a, b;
	
	printf("Enter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of B : ");
	scanf("%d", &b);
	
	double result = pow (a, b);
	
	printf("Power Of A And B = %lf", result);
	
	return 0;
}
