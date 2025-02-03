#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
int find_min(int arr[], int n) {  
    int min = arr[0];  
    for (int i = 1; i < n; i++) {  
        if (arr[i] < min) {  
            min = arr[i];  
        }  
    }  
    return min;  
}  
  
int main() {  
    char numbers[1001];  
    int n = 0;  
    int min_value = 0;  
    int integers[1001]; // 创建新的整数数组来存储转换后的整数  
  
    printf("Enter the integers: ");  
    fgets(numbers, 1001, stdin);  
  
    char *token = strtok(numbers, " ");  
    while (token != NULL) {  
        int num = atoi(token);  
        integers[n++] = num; // 将转换后的整数存储在 integers 数组中  
        token = strtok(NULL, " ");  
    }  
  
    for (int i = 0; i < n; i++) {  
        printf("%d ", integers[i]); // 打印转换后的整数数组  
    }  
    printf("\n");  
  
    min_value = find_min(integers, n); // 传递 integers 数组给 find_min 函数  
    printf("Min=%d\n", min_value);  
    system("pause");  
    return 0;  
}