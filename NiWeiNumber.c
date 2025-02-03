#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    int NiWei_number=0;
    printf("input three number:\n");
    scanf("%d", &number);
    NiWei_number=number%10*100+number%100/10*10+number/100;
    printf("output NiWei_number:");
    printf("%d\n",NiWei_number);
    system("pause");
    return 0;
}