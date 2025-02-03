#include <stdio.h>  
  
int max_int() {  
    int result = 0;  
    int i;  
    for (i = 0; i < 31; i++) {  
        result = result | (1 << i); // 将第i位设置为1  
    }  
    return result;  
}  
  
int main() {  
    int max = max_int();  
    printf("The maximum value of int is: %d\n", max);  
    return 0;  
}