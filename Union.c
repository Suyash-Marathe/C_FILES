#include <stdio.h>

union emp
{
	int id;
	char name[40];
};

int main ()
{
	union emp e;

	printf("The memory allocated to union is %d.", sizeof(e));

	return 0;
}