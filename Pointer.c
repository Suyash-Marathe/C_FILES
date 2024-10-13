#include <stdio.h>
int main ()

{
	int variable;
	int *pointer;
	int **second_pointer;
	
	variable = 200;
	*pointer = &variable;
	**second_pointer = &*pointer;
	
	printf("\nVARIABLE = %d", variable);
	printf("\nPOINTER = %d", *pointer);
	printf("\nSECOND POINTER = %d", **second_pointer);
	
}