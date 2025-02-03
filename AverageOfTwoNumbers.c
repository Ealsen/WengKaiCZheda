#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number1, number2;
    double average = 0;
    printf("Please enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    average = (number1 + number2) / 2.0;
    printf("The average of the two numbers is: %.2f\n", average);
    system("pause");
    return 0;
}