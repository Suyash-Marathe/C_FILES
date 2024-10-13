#include <stdio.h>

int main ()
{
	int a;
	int *p;
	int **pp;
	
	a = 20;
	*p = &a;
	**pp = &*p;
	
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d", **pp);

	return 0;
}
