#include <stdio.h>

void print()
{
	int n, i;
	
	printf("Enter The Number : ");
	scanf("%d", &n);
	
	for (i=1; i<=10; i++)
	{
		printf("\n%d", n * i);
	}
}

int main ()

{	
	print();
	
	return 0;
}