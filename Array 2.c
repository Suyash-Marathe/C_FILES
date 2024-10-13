#include<stdio.h>
int main ()
{
	int a[5],i;
	printf("Enter The Element Of Array : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray Element : ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
