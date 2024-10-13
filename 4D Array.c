#include<stdio.h>
int main ()
{
	int array[2][4]={ {1,7,2,2} , {1,3,1,0} };
	for (int i=0;i<2;++i)
	{
		for (int j=0;j<4;++j)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
