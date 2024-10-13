#include <stdio.h>
#include <math.h>

int main ()

{
    int squareroot_number, cuberoot_number;
    
    printf("Enter The Square Root : ");
    scanf("%d", &squareroot_number);
    
    printf("Enter The Cube Root : ");
    scanf("%d", &cuberoot_number);
    
    printf("\nSquare Root Number = %lf", sqrt (squareroot_number));
    
    printf("\nCube Root Number = %lf", cbrt (cuberoot_number));
    
    return 0;
}
