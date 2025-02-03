#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int i=1;
    int sum=0;
    sum:
        sum=sum+(i++);
    if (i<=n) goto sum;
    
    printf("%d",sum);
    return 0;
}