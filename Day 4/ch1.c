#include<stdio.h>

// Function to demonstrate pass by value
void changeValue(int x) {
    x = 50;  // This change will NOT affect the original variable
    printf("Value inside function: %d\n", x);
}

int main() {
    int num = 10;

    printf("Value before function call: %d\n", num);

    changeValue(num);  // Passing value

    printf("Value after function call: %d\n", num);

    return 0;
}