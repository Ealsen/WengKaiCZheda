#include <stdio.h>  
  
int main() 
{
    // c语言 读取一个字符字母 如果是小写 将他转换为 大写 反之则转换为小写  
    char c;  
    printf("请输入一个字符：");  
    scanf("%c", &c);  
    if (c >= 'a' && c <= 'z') 
    {  
        c = c - 'a' + 'A';  
    } else if (c >= 'A' && c <= 'Z') 
    { 
        c = c - 'A' + 'a';  
    }  
    printf("转换后的字符为：%c\n", c);  
    return 0;  
}