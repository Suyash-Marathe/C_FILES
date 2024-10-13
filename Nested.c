#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter Values Of A , B And C : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("A Is Greater Than C.");
		}
		else
		{
			printf("C Is Greater Than A.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B Is Greater Than C.");
		}
		else
		{
			printf("C Is Greater Than B.");
		}	
	}
	return 0;
}
