#include<stdio.h>
int main ()
{
    int n, r, sum=0, temp;
    printf("Enter The Number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum) 
    {
        printf("Number Is Palindrome.");
    }
    else
    {
        printf("Number Is Not Palindrome.");
    }
    return 0;
}