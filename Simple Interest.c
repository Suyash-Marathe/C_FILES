#include <stdio.h>

int main ()

{
	int p, r, t, s_i;
	
	printf("Enter The Amount : ");
	scanf("%d", &p);
	
	printf("Enter The Rate Of Interest : ");
	scanf("%d", &r);
	
	printf("Enter The Time (Days) : ");
	scanf("%d", &t);
	
	s_i = p * r * t / 100;
	
	printf("Simple Interest = %d", s_i);
	
	return 0;
}