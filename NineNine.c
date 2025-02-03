#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 9;
    printf("Enter the number: ");
    scanf("%d", &num);
    int i,j;
    i=1;
    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d*%d=%d",j,i,j*i);
            if (j*i<10)
            {
                printf("   ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}