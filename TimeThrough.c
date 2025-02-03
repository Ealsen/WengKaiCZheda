#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours1, minutes1, hours2, minutes2;
    printf("Enter the hours1 and minutes1,:\n");
    scanf("%d %d", &hours1, &minutes1);
    printf("Enter the hours2 and minutes2,:\n");
    scanf("%d %d", &hours2, &minutes2);
    int through_hours = hours2 - hours1;
    int through_minutes = minutes2 - minutes1;
    if (through_minutes < 0)
    {
        through_minutes = 60 + through_minutes;
        through_hours --;
    }
    printf("The time difference is: %d h %d m\n", through_hours, through_minutes);
    system("pause");
    return 0;
}