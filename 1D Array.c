#include<stdio.h>
int main ()
{
	int a[10],i;
	printf("Enter THe Number : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements : ");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
