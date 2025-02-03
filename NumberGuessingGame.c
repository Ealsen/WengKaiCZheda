#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = rand()%100+1;
    // printf("%d\n", num);
    int count = 0;
    int guess = 0;
    printf("I have a number in mind, please guess what it is.\n");
    do
    {
        printf("Enter a number between 1 and 100: \n");
        scanf("%d", &guess);
        count ++;
        if (guess > num)
        {
            printf("You guessed the number is big.\n");
        }
        else if (guess < num)
        {
            printf("You guessed the number is small.\n");
        }
    } while (guess != num);
    printf("You guessed right.\n");
    printf("You guessed the number %d times.\n", count);
    
    system("pause");
    return 0;
}