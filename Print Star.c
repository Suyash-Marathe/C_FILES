#include <stdio.h>

int main ()

{
	
	char x = '*';
	int n;
	
	printf("Enter The Quantity : ");
	scanf("%d", &n);
	
	
	printf("\nStars Will Be Print In Assending Order.\n");
	
	for (int i=1; i<=n; i++)
	{
		
		printf("\n");
		
		for (int j=1; j<=i; j++)
		{
			
			printf("%c", x);
		}
	}
	
	return 0;
}