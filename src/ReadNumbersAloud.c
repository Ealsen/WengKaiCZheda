#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<0)
    {
        printf("fu ");
        n=-n;
    }
    int mask = 1;
    int cnt=1;
    int t=n; 
    while (t>9)
    {
        t=t/10;
        mask=mask*10;
    }
    do
    {
        int d = n/mask;
        switch (d)
        {
        case 1:
            printf("yi");
            break;
         case 2:
            printf("er");
            break;
         case 3:
            printf("san");
            break;
         case 4:
            printf("si");
            break;
         case 5:
            printf("wu");
            break;
         case 6:
            printf("liu");
            break;
         case 7:
            printf("qi");
            break;
         case 8:
            printf("ba");
            break;
         case 9:
            printf("jiu");
            break;
         case 0:
            printf("ling");
            break;
        default:
            break;
        }
        if (mask>9)
        {
            printf(" ");
        }
        n%=mask;
        mask/=10;
    } while (n>0);
    printf("\n");
    system("pause");
    return 0;
}