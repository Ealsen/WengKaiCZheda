#include <stdio.h>

// int main()
// {
//     // 整数无法除以0
//     printf("%f\n",12.0/0.0);
//     printf("%f\n",-12/0.0);
//     printf("%f\n",0.0/0.0);
//     return 0;
// }


int main()
{
    float a,b,c;
    a = 1.345f;
    b = 1.123f;
    // 1.123f f表示对b表示的数是浮点数float
    c = a + b;
    if (c==2.468)
    {
        printf("c=a+b\n");
    }
    else
    {
        printf("c!=a+b\n");
        printf("c= %.10f , or %f\n",c ,c);
    }
     

    return 0;
}