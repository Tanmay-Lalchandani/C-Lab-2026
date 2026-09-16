#include <stdio.h>

int main() {
    char c;
    int d;

    printf("Enter any letter(lower or uppercase):\n");
    scanf("%c", &c);
    printf("The ASCII value of %c is %d\n", c, c);
    d = (int) c;

    (d<=122 && d>=97)?printf("%c is a lower case character", c):printf("%c is not a lowercase letter", c);

    return 0;
}