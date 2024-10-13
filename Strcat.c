#include<stdio.h>
#include<string.h>
int main ()
{
	char ch [10]={"Hello"};
    char ch1 [10]={"World"};
    strcat (ch,ch1);
    printf ("Value Of String Is :%s",ch);
	return 0;
}