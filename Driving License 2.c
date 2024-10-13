#include <stdio.h>
int main ()

{
	char gender;
	int age;
	
	printf("Enter The Gender (M/F) : ");
	scanf("%c", &gender);
	
	printf("Enter The Age : ");
	scanf("%d", &age);
	
	if (gender == 'm')
	{
		if (age >= 18)
		{
			printf("Allowed For Driving.");
		}
		else
		{
			printf("Allowed For Driving.");
		}
	}
	else
	{
		if (age >= 21)
		{
			printf("Allowed For Driving.");
		}
		else
		{
			printf("Not Allowed For Driving.");
		}
	}
	
	return 0;
}