#include <stdio.h>

int add(int a, int b, int c);

int main ()
{
	int a=5;
	int b=10;
	int c=15;
	
	int res = add(a, b, c);
	
	printf("Sum Of The Three Numbers : %d", res);
}

int add (int a, int b, int c)
{
	int result = a + b + c;
	
	return result;
}