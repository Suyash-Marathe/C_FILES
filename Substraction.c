#include <stdio.h>

int sub (int a, int b);
int sub (int a, int b)

{
	return a - b;
}

int main ()

{
	int a, b;
	
	printf("Enter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of B : ");
	scanf("%d", &b);
	
	int result = sub (a, b);
	
	printf("Result = %d", result);
	
	return 0;
}
