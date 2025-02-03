#include <stdio.h>
#include <stdlib.h>

int NumberWeiSu(int number) {
    if(number >= 100 && number <= 999) {
        return 3;
    } else if(number >= 0 && number <=9){
        return 1;
    }
    else if(number >= 10 && number <=99){
        return 2;
    }else if (number >= 1000 && number <=9999)
    {
        return 4;
    }else {
        return 0;
    }
}

int NumberCycleDividedByTen(int number)
{
    int count = 0;
    count ++;
    number /= 10;
    while (number > 0)
    {
        count ++;
        number /= 10;
    }
    // do
    // {
    //     count ++;
    //     number /= 10;
    // } while (number > 0);
    
    return count;
}
int main()
{
    int number=0;
    int cycle = 0;
    printf("Enter the Number: \n");
    scanf("%d", &number);
    printf("The Number is %d\n", number);
    cycle = NumberCycleDividedByTen(number);
    printf("The Number is %d Wei Su\n", cycle);
    system("pause");
}
int main1()
{
    int number=0;
    printf("Enter the Number: \n");
    scanf("%d", &number);
    printf("The Number is %d\n", number);
    switch (NumberWeiSu(number))
    {
    case 1:
        printf("Number is 1 Wei Su\n");
        break;
    case 2:
        printf("Number is 2 Wei Su\n");
        break;
    case 3:
        printf("Number is 3 Wei Su\n");
        break;
    case 4:
        printf("Number is 4 Wei Su\n");
        break;
    default:
        printf("The number entered is out of range\n");
        break;
    }
    system("pause");
    return 0;
}