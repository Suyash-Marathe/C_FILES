#include <stdio.h>
#include <math.h>

int main ()

{
    int squareroot_number, cuberoot_number, a, b;
    
    printf("Enter The Square Root Number : ");
    scanf("%d", &squareroot_number);
    
    printf("\nEnter The Cube Root Number : ");
    scanf("%d", &cuberoot_number);
    
    printf("\nEnter The Value Of A : ");
    scanf("%d", &a);
    
    printf("\nEnter The Value Of B : ");
    scanf("%d", &b);
    
    printf("\n\n\Square Root = %lf", sqrt (squareroot_number) );
    
    printf("\n\nCube Root = %lf", cbrt (cuberoot_number) );
    
    double result = pow (a, b);
    printf("\n\nPower Of A And B = %lf");
    
    return 0;
}
