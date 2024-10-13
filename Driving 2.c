#include <stdio.h>
int main ()

{
	int age;
	
	printf("Enter Your Age : ");
	scanf("%d", &age);
	
	if (age >= 18)
	{
		printf("Your Are Allowed For Driving.");
	}
	else
	{
		printf("You Are Not Allowed For Driving.");
	}
	
	return 0;
}
