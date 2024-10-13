#include <stdio.h>

int add(int a, int b)
{
	printf("Enter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of B : ");
	scanf("%d", &b);
	
	return a + b;
}

int main ()
{
	int m, n;
	
	printf("%d", add(m, n));
	return 0;
}