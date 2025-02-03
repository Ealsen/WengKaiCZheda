#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    double Z,M;
    double sum = 0.0;
    double t;
    int i;
    scanf("%d", &num);
    Z = 2;
    M = 1;
    for (i = 1; i <= num; i++)
    {
        sum += Z/M;
        t=Z;
        Z = Z+M;
        M = t;
    }
    printf("%.2f.\n",sum);
    system("pause");
    return 0;
}

// int main()
// {
//     int num;
//     scanf("%d", &num);
//     double sum = 0.0;
//     double Z = 2;
//     double M = 1;
//     double t;
//     int i;
//     for (i = 1; i <= num; i++)
//     {
//         sum += Z/M;
//         t=Z;
//         Z = Z+M;
//         M = t;
//     }
//     printf("The sum of the first %d terms is %.2f.\n", num, sum);
//     system("pause");
//     return 0;
// }