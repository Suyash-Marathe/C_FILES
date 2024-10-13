#include <stdio.h>

int add (int a, int b);
int add (int a, int b)

{
	return a + b;
}

int main ()

{
	int result = add (2, 4);
	printf("The Result Is %d", result);
	
	return 0;
}
