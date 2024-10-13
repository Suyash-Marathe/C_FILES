#include <stdio.h>

int main ()

{
	int tb, gb, mb, kb;
	
	printf("Enter The TB : ");
	scanf("%d", &tb);
	
	gb = tb * 1024;
	mb = tb * 1048576;
	kb = tb * 1073741824;
	
	printf("\nEntered TB In GB Is = %d", gb);
	printf("\nEntered TB In MB Is = %d", mb);
	printf("\nEntered TB In KB Is = %d", kb);

	return 0;
}
