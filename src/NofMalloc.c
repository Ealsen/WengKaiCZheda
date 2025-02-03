#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int* a;
    int i;
    printf("enter counts:\n");
    scanf("%d", &number);
    // int a[number]; // c99
    a = (int*)malloc(number * sizeof(int));
    for (i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = number-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    free(a);

    return 0;
}