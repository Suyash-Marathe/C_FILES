#include <stdio.h>
int main ()

{
	int n, temp, sum=0, r;
	
	printf("Enter The Number : ");
	scanf("%d", &n)
	
	temp = n;
	
	while (n > 0)
	{
		r = n % 10;
		sum = sum + (r*r*r);
		n = n / 10;	
	}
	
	if (temp == n)
	{
		printf("Entered Number Is Armstrong.");
	}
	else 
	{
		printf("Entered Number Is Not Armstrong.");
	}
	
	return 0;
}
