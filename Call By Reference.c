#include <stdio.h>

void swap (int *, int *);
int main ()

{
	int a = 10;
	int b = 20;

printf("Before Swapping The Values In Main A = %d , B = %d\n", a, b);
swap (&a, &b);

printf("After Swapping Values In Main A = %d , B = %d\n", a, b);

}

void swap (int *a, int *b)

{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
	printf("After Swapping Values In Function A = %d , B = %d\n", *a, *b);
}
