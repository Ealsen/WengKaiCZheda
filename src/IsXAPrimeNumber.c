#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the X: ");
    int x = 0 ;
    scanf("%d", &x);
    int i = 2;
    int isPrime = 1 ;
    for ( ; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime == 1)
    {
        printf("The number is prime number.\n");
    }
    else
    {
        printf("The number is not prime number.\n");
    }
    
    system("pause");
    return 0;
}