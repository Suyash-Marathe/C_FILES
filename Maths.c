#include<stdio.h>

int main()
{
int a, b, add, sub, mul, div;
    printf("Enter The Two Numbers :");
    scanf("%d %d", &a, &b) ;
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\nAddition :=%d", add) ;
    printf("\nSubstraction :=%d", sub) ;
    printf("\nMultiplication :=%d", mul) ;
    printf("\nDivision :=%d", div) ;
    return 0;
}