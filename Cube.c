#include<stdio.h>
int main ()
{
	int i,n;
	printf("Enter The Number : ");
	scanf("%d",&n);
	for(i=n;i<=10;i++)
	{
		printf("\n%d",i*i*i);
	}
	return 0;
}
