#include <stdio.h>
#include <stdlib.h>

int SumN(int n)
{
    int sum =0;
    int i;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}


// Find the sum of the first n terms of one of n
int Sum1DividedByN(int n)
{
    double sum = 0.0;
    int i;
    for (i = 1; i <= n; i++)
    {
        sum += 1.0/i;
    }
    return sum;
}


int main()
{
    double sum;
    int n,i;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    sum = SumN(n);

    printf("The sum of the first %d terms is %lf.\n",n,sum);

    system("pause");
    return 0;
}