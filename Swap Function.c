#include <stdio.h>

void swap (int *, int *);

int main ()

{
	int a = 20;
	int b = 40;
	
	printf("Before Swapping Values Of A = %d And B = %d.", a, b);
	swap (&a, &b);
	
	printf("\nAfter Swaping Values Of A = %d And B = %d.", a, b);
}

void swap (int *a, int *b)

{
	
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
	printf("\nAter Swap A = %d And B = %d.", *a, *b);
}