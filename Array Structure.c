#include <stdio.h>
#include <string.h>

struct student
{
	int roll_no;
	char name [10];
};

void main ()
{
	int i;
	struct student st[5];
	
	printf("Enter Records Of 5 Student : \n\n");
	
	for (i=0; i<5; i++)
	{
		printf("Enter Roll Number : ");
		scanf("%d", &st[i].roll_no);
		
		printf("Enter Name : ");
		scanf("%s", &st[i].name);
	}
	
	printf("\nStudent Information List : \n");
	
	for (i=0; i<5; i++)
	{
		printf("\nRoll Number : %d, Name : %s", st[i].roll_no, st[i].name);
	}
	
	
}