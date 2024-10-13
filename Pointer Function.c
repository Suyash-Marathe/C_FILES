#include <stdio.h>

int add (int * a, int * b)
{
	int add = *a + *b;
}

int main ()
{
	int a = 20;
	int b = 40;
	
	printf("\nThe addition of A and B = %d.", add(&a, &b));
	
	return 0;
}