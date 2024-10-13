#include <stdio.h>
#include <string.h>

struct Employee
{
	int employee_id;
	char name [40];
	int salary;
};

struct Organisation
{
	char organisation_name[40];
	char org_number[40];
	
	struct Employee emp;
};

void main ()
{	

	struct Organisation org;
	
	printf("The size of structure organisation : %d\n", sizeof(org));
	org.emp.employee_id = 101;
	
	strcpy (org.emp.name, "Pratik Mhatre");
	
	org.emp.salary = 400000;
	
	strcpy (org.organisation_name, "P O Nahata Collage Bhusawal");
	strcpy (org.org_number, "BASPONC110012");
	
	printf("Organisation Name : %s\n", org.organisation_name);
	printf("Organisation Number : %s\n", org.org_number);
	printf("Employee Id : %d\n", org.emp.employee_id);
	printf("Employee Name : %s\n", org.emp.name);
	printf("Employee Salary : %d\n", org.emp.salary);
	
	return 0;
}