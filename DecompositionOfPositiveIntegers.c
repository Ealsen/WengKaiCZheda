#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 13425;

    // mask is : 10 ** (digits-1)
    
    int mask = 1;
    int num_wei= 0;

    printf("input number:\n");
    scanf("%d", &num);
    
    int num_count = num;

    // Need to get the number of digits 
    // But not only the number of digits
    // Need the 10 ** (digits-1)

    while (num_count > 9)
    {
        num_count /= 10;
        mask *= 10;
    }
    printf("mask=%d \n",mask);

    printf("The num Fenli is:\n");

    do
    {
        num_wei = num / mask;
        printf("%d",num_wei);
        
        // Because end of num is not blank space
        // So need to add "if"
        
        if (mask > 9)
        {
           printf(" "); 
        }
        num %= mask;
        mask /= 10;
    } while (mask > 0);
    
    printf("\n");
    system("pause");
    return 0;
}