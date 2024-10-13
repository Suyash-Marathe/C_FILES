#include <stdio.h>			
#include <string.h>			

struct student					
{
	int id;
	char name[12];
	char city[12];
	float marks;
};

int main ()
{
	struct student rohan, mehul, dipak;
	
	rohan.id = 1;
	rohan.name[12] = "Rohan";
	rohan.city[12]= "Pune";
	rohan.marks = '84.26';
	
	printf("\nId = %d", rohan.id);
	printf("\nName = %s", rohan.name);
	printf("\nCity = %s", rohan.city);
	printf("\nMarks = %f", rohan.marks);
	
	return 0;
}