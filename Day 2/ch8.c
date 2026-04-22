#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // check if alphabet
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        // check vowel
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }

    } else {
        printf("Not an alphabet");
    }

    return 0;
}