#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t=1;
    int cnt=0;
    scanf("%d",&n);

    while(n/t)
    {
        t*=10;
    }
    t/=10;
    while(n)
    {
        if (t > 9)
        {
           printf("%d ",n/t%10);
           t/=10;
        }
        else
        {
           printf("%d",n/t%10);
           t/=10;
        }
    }

    printf("\n");
    system("pause");
    return 0;
}