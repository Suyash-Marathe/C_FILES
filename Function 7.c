#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main ()
{
	int result = add(51, 55);
	
	printf("Addition = %d", result);
	
	return 0;
}