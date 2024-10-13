#include <stdio.h>
int main ()

{
	int year;
	
	printf("Enter The Year : ");
	scanf("%d", &year);
	
	if (year % 4 == 0)
	{
		printf("Entered Year Is Leap Year.");
	}
	else
	{
		printf("Entered Year Is Not Leap Year.");
	}
	
	return 0;
}
