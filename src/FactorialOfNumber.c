#include <stdio.h>
#include <stdlib.h>

int Factorization(int number)
{
    int factorization = 1;
    int i = 1 ;
    while (i <= number)
    {
        factorization *= i;
        i++;
    }
    return factorization;
}


int main()
{
    int number = 0 ;
    printf("Enter a number : \n");
    scanf("%d", &number);
    int factorial = Factorization(number);
    printf("Factorial of %d is %d.\n", number, factorial);
    system("pause");
    return 0;
}