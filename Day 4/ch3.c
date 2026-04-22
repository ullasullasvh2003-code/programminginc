#include <stdio.h>

int main() {
    char name[50];
    int age;
    int id;
    char grade;

    // Taking input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your ID: ");
    scanf("%d", &id);

    printf("Enter your grade: ");
    scanf(" %c", &grade);  // space before %c to consume newline

    // Displaying output
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("ID    : %d\n", id);
    printf("Grade : %c\n", grade);

    return 0;
}