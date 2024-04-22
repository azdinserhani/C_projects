#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    c = getchar();

    printf("You entered: ");
    putchar(c); // Display the character using putchar()

    return 0;
}

