#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1=0;
    int number2=0;

    printf("Two Numbers:\n");
    scanf("%d %d",&number1,&number2);

    int plus = number1+number2;
    int minus = number1-number2;
    int multiply = number1*number2;
    int divide = number1/number2;

    printf("%d + %d = %d\n",number1,number2,plus);
    printf("%d - %d = %d\n",number1,number2,minus);
    printf("%d * %d = %d\n",number1,number2,multiply);
    printf("%d / %d = %d\n",number1,number2,divide);
    system("pause");
    return 0;   
}