#include <stdio.h>

int main() {
    int i;
    float f;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &ch);   // space before %c to avoid newline issue

    printf("\nYou entered:\n");
    printf("Integer = %d\n", i);
    printf("Float = %f\n", f);
    printf("Character = %c\n", ch);

    return 0;
}