#include <stdio.h>

int main ()

{
    float rs, dollar=0.0121, jpy=1.8141, gbp=0.0095, brl=0.0596;
    
    printf("Enter The Amount In Rupees : ");
    scanf("%f", &rs);
    
    printf("\nEntered Rupees In American Currency = %f", rs * dollar);
    
    printf("\nEntered Rupees In Japan Currency = %f", rs * jpy);
    
    printf("\nEntered Rupees In British Currency = %f", rs * gbp);
    
    printf("\nEntered Rupees In Brazil Currency = %f", rs * brl);
    
    return 0;
}