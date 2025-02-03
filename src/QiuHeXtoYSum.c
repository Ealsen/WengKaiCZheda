#include <stdio.h>


int ToSum(int x, int y);  // declare function
int main()
{
    int x, y;
    int sum;
    printf("Please input the range of x and y: ");
    scanf("%d %d", &x, &y);
    sum = ToSum(x, y);
    printf("The sum from x to y is %d\n", sum);
    return 0;
}


int ToSum(int x, int y)
{
    int sum = 0;
    for ( ; x <= y; x++)
    {
        sum += x;
    }
    return sum;
}