#include <stdio.h>

int main ()
{
	auto int a = -20;
	static int b = 4;
	
	printf("Value of auto variable = %d", a);
	printf("\nValue of static variable = %d", b);
	
	if (a != 0)
	printf("\nThe sum of static variable and auto variable = %d", (a + b));
	
	return 0;
}