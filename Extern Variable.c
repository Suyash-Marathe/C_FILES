#include <stdio.h>

extern int x = 20;
int b = 6;

int main ()
{
	auto  a = 10;
	extern int b;
	
	printf("The value of auto variable = %d.", a);
	printf("\nThe value of extern variable x and b = %d and %d.", x, b);
	
	x = 15;
	
	printf("\nThe value of modified extern variable x = %d.", x);
	
	return 0;
}