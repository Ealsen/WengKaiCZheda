#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int i;
//     scanf("%d",&i);
//     int arr[i]={0};
//     int right=(sizeof(arr)/sizeof(arr[0]));
//     int j=0;
//     for(j=0;j<i;j++)
//     {
//         scanf("%d",&arr[j]);
//     }
//     for(right=right-1;right>=0;right--)
//     {
//         printf("%d",arr[right]);
//     }
// }


// #define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>  
// #include <stdlib.h>  

int main()
{
    int length;
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    int* arr = (int*)malloc(length * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int count = 0;
    int value;
    printf("Enter %d elements of the array:\n",length);
    while (count < length) {
        scanf("%d", &value);
        if (value != -1) {
            arr[count] = value;
            count++;
        }
    }
    for (int right = length - 1; right >= 0; right--) {
        printf("%d", arr[right]);
    }
    free(arr);  
    system("pause");
    return 0;
}
