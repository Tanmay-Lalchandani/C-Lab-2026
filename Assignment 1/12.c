#include <stdio.h>

int main() {
    char c;

    printf("Enter any character (numbers, letters, special symbols, capital, small):\n");
    scanf("%c", &c);
    printf("ASCII value of %c is %d.\n", c, c);
    return 0;
}