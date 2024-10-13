#include <stdio.h>
#include <string.h>

int main ()

{
	
	char str1[10] , str2[10] ;
	
	printf("Enter First String : ");
	gets(str1);
	
	printf("Enter Second String : ");
	gets(str2);
	
	if (strcmp ( str1 , str2 )==0 )
	
	{
		printf("Strings Are Equal.");
	}
	
	else
	
	{
		printf("Strings Are Not Equal.");
	}
	
	return 0;
	
}
