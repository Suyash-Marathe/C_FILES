#include <stdio.h>

int main ()

{
	int age;
	
	printf("Enter Your Age : ");
	scanf("%d", &age);
	
	if (age >= 18)
	{
		printf("Your Age Sufficient For Driving License.");
	}
	else
	{
		printf("Your Age Is Not Sufficient For Drving License.");
	}
	
	return 0;
}
