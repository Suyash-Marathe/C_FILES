#include<stdio.h>
int main ()
{
	int a,b,add,sub,mul,div,rem;
	printf("Enter Two Numbers : ");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("\tAddition = %d",add);
	printf("\tSubstraction = %d",sub);
	printf("\tMultiplication = %d",mul);
	printf("\tDivision = %d",div);
	printf("\tRemainder = %d",rem);
	return 0;
}
