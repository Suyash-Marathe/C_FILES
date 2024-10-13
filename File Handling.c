#include<stdio.h>

int main ()
{
	FILE *ptr = NULL;
	ptr = fopen("File.txt", "r");
	char c = fgetc(ptr);
	
	printf("File = %d", c);
	
	return 0;
}