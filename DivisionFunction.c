#include <stdio.h>



int Division(int a, int b, int *result)
{
    int ret = 1;
    if (b == 0)
    {
        ret = 0;
    }
    else
    {
        *result = a / b;
    }
    return ret;
}
int main()
{
    int a, b, result, ret;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    ret = Division(a, b, &result);
    printf("The division of %d and %d is %d.Return is %d.", a, b, result, ret);
    return 0;
}