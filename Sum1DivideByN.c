#include <stdio.h>
#include <stdlib.h>


// int main()
// {
//     int n = 0;
//     double sum = 0.0;
//     int i;
//     printf("Please input the number of terms: \n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         sum += 1.0/i;
//     }
//     printf("sum = %f\n", sum);
// }


int main()
{
    int n = 0;
    double sum = 0.0;
    int i;
    int sign = 1;
    printf("Please input the number of terms: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += sign*1.0/i;
        sign = -sign;          // the variable is importance!
    }
    printf("sum = %f\n", sum);
}


// #include<stdio.h>
// int main()
// {
// int n=0;
// scanf("%d",&n);
// int i=0;
// float s1=0,s2=0;
// float d;
// for(i=1;i<=n;i++)
// {
//     if(i%2==1)
//     {
//         s1=s1+1.0/i;
//     }
// else 
//     {
//         s2=s2+1.0/i;
        
//     }
// }
//         d=s1-s2;
//         printf("%f",d);
// }