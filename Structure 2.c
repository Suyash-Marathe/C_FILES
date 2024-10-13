#include <stdio.h>
#include <string.h>

struct employee
 {
	int id;
	char name[50];
	float salary;
} e1, e2;

void main () 
{
	e1.id = 101;
	strcpy(e1.name, "Malhar Patil");
	
	e1.salary = 55000;
	
	e2.id = 102;
	strcpy(e2.name, "Pallavi Patil");
	
	e2.salary = 126000;
	
	printf("Employee 1 Id : %d\n", e1.id);
	printf("Employee 1 Name : %s\n", e1.name);
	printf("Employee 1 Id : %f\n", e1.salary);
	
	printf("Employee 2 Id : %d\n", e2.id);
	printf("Employee 2 Name : %s\n", e2.name);
	printf("Employee 2 Id : %f\n", e2.salary);
	
}