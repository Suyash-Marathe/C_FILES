#include <stdio.h>

int add()
{
	int a, b;
	
	printf("Enter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of A And B : ");
	scanf("%d", &b);
	
	int add = a + b;
	
	printf("Addition Of A And B Is = %d\n\n", add);
}

int sub()
{
	int a, b;
	
	printf("\nEnter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of A And B : ");
	scanf("%d", &b);
	
	int sub = a - b;
	
	printf("Substraction Of A And B Is = %d\n\n", sub);
}

int mul()
{
	int a, b;
	
	printf("\nEnter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of A And B : ");
	scanf("%d", &b);
	
	int mul = a * b;
	
	printf("Multiplication Of A And B Is = %d\n\n", mul);
}

int div()
{
	int a, b;
	
	printf("\nEnter The Value Of A : ");
	scanf("%d", &a);
	
	printf("Enter The Value Of A And B : ");
	scanf("%d", &b);
	
	int div = a / b;
	
	printf("Division Of A And B Is = %d\n\n", div);
}

int rem()
{
	int a, b;
	
	printf("\nEnter The Value Of A : ");
	scanf("%d", &a);
		
	printf("Enter The Value Of A And B : ");
	scanf("%d", &b);
	
	int rem = a % b;
	
	printf("Remainder Of A And B Is = %d\n\n", rem);
}

int main ()

{
	
	add();
	sub();
	mul();
	div();
	rem();
	
	return 0;
}