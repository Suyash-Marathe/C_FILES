#include <stdio.h>

int main ()
{
	int var = 20;
	int * p;
	int ** pp;
	
	p = &var;
	pp = &p;
	
	printf("\nThe value of Variable = %d.", var);
	printf("\nThe value of Pointer = %d.", *p);
	printf("\nThe valur of Pointer to Pointer = %d.", **pp);
	
	return 0;
}