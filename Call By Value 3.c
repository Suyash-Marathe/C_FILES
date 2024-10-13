#include <stdio.h>

void add(int num)

{
	
	printf("\nBefore Adding Value In Num = %d.", num);
	num = num + 100;
	
	printf("\nAfter Adding Value In Num = %d.", num);
}

int main ()

{
	int x = 100;
	
	printf("\nBefore Function Call X = %d", x);
	
	
	printf("\nAfter Function Call X = %d", x);
	add(x);
	
	return 0;
}