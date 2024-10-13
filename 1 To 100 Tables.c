#include <stdio.h>

int main ()

{
	int i, j;
	
	for (i=1; i<=100; i++)
	{
		for (j=1; j<=100; j++)
		{
			printf("\n%d ", i);
			printf("* %d =", j);
			printf(" %d", i * j);
		}
	}
	
	return 0;
}
