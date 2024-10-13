#include <stdio.h>
int main ()

{
	int i, j;
	
	for (i=11; i<=20; i++)
	{
		for (j=1; j<=10; j++)
		{
			printf("\n%d", i);
			printf(" * ");
			printf("%d", j);
			
			printf("%d = ", i * j);
		}
		
		printf("\n");
	}
	
	return 0;
}