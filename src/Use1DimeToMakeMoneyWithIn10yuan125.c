#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    printf("Enter integers below 10.\n");
    scanf("%d",&x);
    int one, two, five;
    int exit = 0;
    for (one = 1; one < x * 10;one++)
    {
       for (two = 1; two < x * 10/2;two++)
       {
        for (five = 1; five < x * 10/5;five++)
        {
            if (one * 1 + two * 2 + five * 5 == x * 10 )
            {
                printf("Use %d 1jiao %d 2jiao %d 5jiao Dei dao : %d\n", one, two, five, x);
                exit = 1;
                break;
            }
        }
         if (exit == 1)
            {
                break;
            } 
       }
        if (exit == 1)
            {
                break;
            }  
    }

    system("pause");
    return 0;
}