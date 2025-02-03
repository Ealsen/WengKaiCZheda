#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("Enter the Num,Max not until 6\n");
    scanf("%d", &num);
    int i,j,k;
    int cnt = 0;
    
    printf("%d Mei Ju Num Pai Lie is : \n",num);
    
    i=num;
    while (i<=num+3)
    {
        j=num;
        while (j<=num+3)
        {
            k=num;
            while (k<=num+3)
            {
                if (i!=j && i!=k && j!=k)
                {
                    printf("%d%d%d",i,j,k);
                    cnt++;
                    if (cnt == 6)
                    {
                        printf("\n");
                        cnt = 0;
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }
       

    system("pause");
    return 0;
}