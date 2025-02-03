#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divident,divisor;
    scanf("%d/%d",&divident,&divisor);
    int a = divident;
    int b = divisor;
    int t = 0;
    while (b > 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d/%d\n",divident/a,divisor/a);
    system("pause");
    return 0;
}