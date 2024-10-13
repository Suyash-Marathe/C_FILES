#include<stdio.h>
#include<string.h>
int main()
{
    char ch [20]={'J','A','V','A','/0'};
    strcpy (ch, ch) ;
    printf("The Value Of Second String Is :%s",ch);
    return 0;
}