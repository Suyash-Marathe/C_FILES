#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Numbers :");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("A Is Greater.",a);
    else
    if(b>a)
    printf("B Is Greater. ",b);
    return 0;
}