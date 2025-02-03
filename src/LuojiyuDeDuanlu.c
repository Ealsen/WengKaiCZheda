#include <stdio.h>

int main()
{
    int a = -1;
    if(a>0 && a++>1) // Duanlu
    {
        printf("OK\n");
    }
    printf("a=%d\n",a);
    return 0;
}