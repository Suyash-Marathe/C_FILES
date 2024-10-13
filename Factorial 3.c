#include<stdio.h>
int main ()
{
	int n,i,f=1;
	printf("Enter The Number : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("Factorial = %d",f);
	return 0;
}
