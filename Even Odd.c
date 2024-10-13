#include <stdio.h>
int main ()

{
    int even=0, odd=0, i;
    
    for (i=1; i<=20;i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
            even += i;
        }
        else
        {
            printf("\t%d", i);
            odd += i;
        }
    }
    
    printf("\n\n%d", even);
    printf("\t%d", odd);
    
    printf("\n\n%d", even + odd);
    
    return 0;
}
