#include <stdio.h>
int main ()

{
    int n, r, temp, sum = 0;
    
    printf("Enter The Number : ");
    scanf("%d", &n);
    
    temp = n;
    
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }
    
    if (temp == sum)
    {
        printf("Entered Number Is Armstrong.");
    }
    else
    {
        printf("Entered Number Is Not Armstrong.");
    }
    
    return 0;
}
