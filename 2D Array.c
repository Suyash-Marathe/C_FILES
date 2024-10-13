#include<stdio.h>
int main ()
{
	int a[2][4],i,j;
	printf("Enter The Elements : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d %d",&a[i][j]);
		}
		printf("\n%d \n%d",a[i][j]);
	}
	printf("Elements : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\n%d \n%d",a[i][j]);
		}
	}
	return 0;
}
