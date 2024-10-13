#include <stdio.h>
#include <ctype.h>

int main ()

{
	char alphabet;
	
	printf("Enter The Alphabet : ");
	scanf("%c", &alphabet);
	
	char lower = tolower (alphabet);
	printf("%c", lower);
	
	return 0;
}
