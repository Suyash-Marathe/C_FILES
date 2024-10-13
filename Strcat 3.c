#include<stdio.h>
#include<string.h>

int main ()

{
	
	char ch[10]="Hello ";
	char ch1[20]="World !";
	
	strcat( ch, ch1 );
	
	printf("%s", ch);
	
	return 0;
	
}
