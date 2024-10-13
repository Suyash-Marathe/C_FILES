#include <stdio.h>

void sub (int num)

{
	
	printf("\nBefore Substract Value From The Number = %d.", num);
	num = num - 100;
	
	printf("\nAfter Substracting Value From Number = %d.", num);
}

int main ()

{
	
	int x = 40;
	
	printf("\nBefore Substracting Value From Num = %d.", x);
	
	printf("\nAfter Substracting Value From The Number = %d.", x);
	sub (x);
	
	return 0;
}