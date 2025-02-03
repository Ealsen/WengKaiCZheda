#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1=0;
    int number2=0;
    int temp = 0;

    printf("Please enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    while (number2 !=0)
    {
        temp = number1 % number2;
        number1 = number2;
        number2 = temp;
    }
    
    printf("The greatest common divisor of the two numbers is: %d\n", number1);
    system("pause");
    return 0;
}