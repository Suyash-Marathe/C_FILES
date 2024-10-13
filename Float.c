#include<stdio.h>
int main ()
{
	float a,b,add,sub,mul,div,rem;
	printf("Enter The Value Of A And B : ");
	scanf("%f %f",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("\nAddition = %f",add);
	printf("\nSubstraction = %f",sub);
	printf("\nMultiplication = %f",mul);
	printf("\nDivision = %f",div);
	return 0;
}
