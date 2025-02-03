#include <stdlib.h>
#include <stdio.h>

int main()
{
    int count = 0;
    float sum = 0;
    int num = 0;
    printf("Enter the Array of Number.\n");
    printf("Enter the -1 to end.\n");
    printf("After entering the number, press key of enter to enter the next one.\n");

    // do
    // {
    //     scanf("%d", &num);
    //     if (num != -1)
    //     {
    //         count ++;
    //         sum += num;
    //     }
    // } while (num != -1);

    scanf("%d", &num);
    while (num != -1)
    {
        sum += num;
        count ++;
        scanf("%d", &num);
    }   

    sum = sum / count;
    printf("The average of the input array is %.3f.\n", sum);
    system("pause");
    return 0;
}