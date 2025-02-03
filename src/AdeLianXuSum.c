#include <stdio.h>

// a -> 2 4
// sum=2+22+222+2222=2468
int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    int i;
    int t=0;
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        t=a+t*10;
        sum = sum+t;
    }
    printf("%d",sum);
    return 0;
}