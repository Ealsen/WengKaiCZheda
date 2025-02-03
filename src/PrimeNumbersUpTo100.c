#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2;
    int x = 2;
    int isPrime = 1 ;

    for( ;x<100;x++)
    {
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
            printf("%d ", x);
        }
    }
    printf("\n");
    system("pause");
    return 0; 
}