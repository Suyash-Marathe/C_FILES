#include <stdio.h>
#include <ctype.h>

int main ()

{
	char alphabet;
	
	printf("Enter The Alphabet : ");
	scanf("%c", &alphabet);
	
	char upper = toupper (alphabet);
	printf("%c", upper);
	
	return 0;
}
