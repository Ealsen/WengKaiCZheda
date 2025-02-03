#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 12345;
    int digit = 0;
    int ret = 0;
    
    printf("input number:\n");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        ret = ret * 10 + digit;
        num /= 10;
    }
    
    printf("Inverted Output Of Integers: %d\n", ret);
    system("pause");
    return 0;
}