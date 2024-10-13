#include <stdio.h>

int reverse_numbers()
{
	int n, r;
	
	printf("Enter The Numbers : ");
	scanf("%d", &n);
	
	printf("\n");
	
	while (n > 0)
	{
		r = n % 10;
		printf("%d", r);
		
		n = n / 10;
	}
}

int main ()

{
	reverse_numbers();
	
	return 0;
}