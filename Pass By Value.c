#include <stdio.h>

void change (int num)

{
	printf("Before Adding Value Inside Function Num = %d \n", num);
	num = num + 100;
	
	printf("After Adding Value Inside Function Num = %d \n", num);
}

int main ()

{
	int x = 100;
	
	printf("Before Function Call X = %d \n", x);
	change (x);
	
	printf("After Function Call X = %d", x);
	
	return 0;
}
