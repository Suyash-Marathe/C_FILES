#include <stdio.h>

void swap (int a, int b);
void main ()

{	
	int x, y;
	
	printf("\nEnter The Value Of X : ");
	scanf("%d", &x);
	
	printf("\nEnter The Value Of Y : ");
	scanf("%d", &y);
	
	printf("\nBefore Calling Swap Function.");
	
	printf("\nValue Of X = %d , Value Of Y = %d", x, y);
	
	swap (x, y);
	
	printf("\nAfter Returning From Swap Function.");
	
	printf("\nValue Of X = %d , Value Of Y = %d", x, y);
}

void swap (int a, int b)

{
	int temp;
	
	printf("\nInside The Function.");
	
	printf("\nThe Value Of A = %d , The Value Of B = %d Before Swap\n", a, b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nValue Of A = %d , Value Of B = %d After Swap\n", a, b);
}
