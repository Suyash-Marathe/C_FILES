#include <stdio.h>

int main (int argc, int * argv [])
{
	printf("\nThe Name Of The Program Is %s.", argv [0]);
	
	if (argc < 2)
	{
		printf("\nNo Argument Is Passed Through Command Line.");
	}
	else
	{
		printf("\nFirst Argument Is %s.", argv [1]);
	}

	return 0;
}	  
