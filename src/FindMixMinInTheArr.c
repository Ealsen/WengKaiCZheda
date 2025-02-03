#include <stdio.h>

// Find the maximum and minimum values in an array of length.
void FindMixMin(int a[], int len, int *max , int *min)
{
    int i;
    *max=*min=a[0];
    for (i = 1; i < len; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
    }
    for (i = 1; i < len; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}


int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 12, 13, 14, 16, 17, 18, 19, 20};
    int mix,min;
    FindMixMin(a, sizeof(a)/sizeof(a[0]), &mix, &min);
    printf("Mix is %d, Min is %d .\n", mix, min);
    return 0;
}