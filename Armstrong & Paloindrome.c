#include <stdio.h>
int main ()

{
    int n_1, n_2, r_1, r_2, temp_1, temp_2, sum_1 = 0, sum_2 = 0;
    
    printf("Enter The Number : ");
    scanf("%d", &n_1);
    
    temp_1 = n_1;
    
    while (n_1 > 0)
    {
        r_1 = n_1 % 10;
        sum_1 = sum_1 + (r_1*r_1*r_1);
        n_1 = n_1 / 10;
    }
    
    if (temp_1 == sum_1)
    {
        printf("Entered Number Is Armstrong.");
    }
    else
    {
        printf("Entered Number Is Not Armstrong.");
    }
    

    printf("\n\nEnter The Number : ");
    scanf("%d", &n_2);
    
    temp_2 = n_2;
    
    while (n_2 > 0)
    {
        r_2 = n_2 % 10;
        sum_2 = (sum_2 * 10) + r_2;
        n_2 = n_2 / 10;
    }
    
    if (temp_2 == sum_2)
    {
        printf("Entered Number Is Palindrome.");
    }
    else
    {
        printf("Entered Number Is Not Palindrome.");
    }
    
    return 0;
}