#include <stdio.h>

int add (int a, int b);
int add (int a, int b)

{
	return a + b;
}

int main ()

{
	int a, b;
	
	printf("Enter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of B : ");
	scanf("%d", &b);
	
	int result = add (a, b);
	
	printf("The Result Is = %d", result);
	
	return 0;
}
