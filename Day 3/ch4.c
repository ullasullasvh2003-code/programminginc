#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr;

    ptr = arr;  // pointer points to first element of array

    printf("Array elements using pointer:\n");

    for(int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}