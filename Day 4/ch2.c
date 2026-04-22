#include <stdio.h>

// A simple function
int add(int a, int b) {
    return a + b;
}

// Function that takes another function as a parameter
void operate(int x, int y, int (*func)(int, int)) {
    int result = func(x, y);
    printf("Result: %d\n", result);
}

int main() {
    operate(5, 3, add);  // Passing function as argument
    return 0;
}