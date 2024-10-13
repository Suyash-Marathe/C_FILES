#include <stdio.h>

int main ()
{
	FILE *ptr = NULL;
	
	ptr = fopen("File.txt", "w");
	
	char c = fgetc(ptr);
	printf("The first letter of file is %c\n", c);

	char str[34];
	fgets(str, 66, ptr);

	printf("The string is %s\n", str);

	fputc('o', ptr);
	fputs("This is file handling.", ptr);
	
	fclose (ptr);
	return 0;
}