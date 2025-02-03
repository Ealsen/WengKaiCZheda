#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 10;

    printf("Number Plus Plus: %d\n", number++);
    printf("Number: %d\n", number);

    printf("Plus Plus Number: %d\n", ++number);
    printf("Number: %d\n", number);
    system("pause");
    return 0;
}