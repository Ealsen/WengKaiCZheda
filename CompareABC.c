#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int max=0;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("The largest number is %d\n",max);
    system("pause");
    return 0;
}