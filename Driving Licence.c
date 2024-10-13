#include<stdio.h>
int main ()
{
    int age;
    printf("Enter Your Age :",age);
    scanf("%d",&age);
    if (age>18)
    {
    printf("YOUR AGE IS SUFFICIENT FOR DRIVING LICENSE.");
    }
    else(age<18);
    {
    printf("YOUR AGE IS NOT SUFFICIENT FOR DRIVING LICENSE.");
    }
    return 0;
}    
    