#include <stdio.h>
#include <stdlib.h>

int main()
{
    float foot = 0;
    float inch = 0;
    float height = 0;
    printf("Enter your height in foot and inches:\n");
    scanf("%f %f", &foot, &inch);
    height =(foot + inch/12.0) * 0.3048;
    printf("Your height is %.3f meters\n", height);
    system("pause");
    return 0;
}