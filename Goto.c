#include<stdio.h>

int main()
{
    int i;
    i=1; i<1; i++ ;
    {
    if (i==5)  
    {
    }
    printf("%d",&i);
    }
    printf("Skipped Number 5");
    return 0;
}