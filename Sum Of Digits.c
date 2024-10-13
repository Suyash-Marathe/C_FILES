#include <stdio.h>
int main ()

{
	int r, n, sum=0;
	
	printf("Enter The Numbers : ");
	scanf("%d", &n);
	
	while (n > 0)
	{
		
		r = n % 10;
		sum = sum + r;
		n = n / 10;
	}
	
	printf("Total Sum Of Digits = %d", sum);
	
	return 0;
}