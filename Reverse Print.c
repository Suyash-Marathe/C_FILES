#include <stdio.h>
int main ()

{
	int i, r, n;
	
	printf("Enter The Number : ");
	scanf("%d", &n);
	
	while (n > 0)
	{
		r = n % 10;
		
		printf("%d", r);
		
		n = n / 10;
	}
	
	return 0;
}
