#include<stdio.h>
int main ()
{
	int i,n=1;
	for(i=n;i<=200;i++)
	{
		if(i%2==0)
		{
			printf("\n%d = THIS IS THE EVEN NUMBER.\n",i);
		}
		else
		{
			printf("\t\t\t\t%d = THIS IS THE ODD NUMBER.",i);
		}
	}
	return 0;
}
