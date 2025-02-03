#include <stdio.h>

int main()
{
    int ch;
    // Windows input CTRL + C to end linux and unix input CTRL + D to end
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    
    printf("EOF\n");
    return 0;
}