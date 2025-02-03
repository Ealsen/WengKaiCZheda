#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable1, variable2;
    printf("Enter two numbers: ");
    scanf("%d %d", &variable1, &variable2);
    int temp=0;
    temp=variable1;
    variable1=variable2;
    variable2=temp;
    printf("variable1:%d variable2:%d\n", variable1, variable2);
    system("pause");
    return 0;
}