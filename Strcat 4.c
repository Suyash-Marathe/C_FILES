#include <stdio.h>
#include <string.h>

int main ()

{
	char ch1 [10] = "Hello ";
	char ch2 [20] = "World !";
	
	strcat (ch1, ch2);
	
	printf("%s", ch1);
	
	return 0;
}
