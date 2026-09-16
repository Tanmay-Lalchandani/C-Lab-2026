#include <stdio.h>

int main() {
    char c;
    int d;

    printf("Enter any character (numbers, letters, special symbols, capital, small):\n");
    scanf("%c", &c);
    printf("The ASCII value of %c is %d\n", c, c);
    d = (int) c;
    /*0-9=48-57
    a-z = 97-122
    A-Z = 65-90
     */

    if (d<=57 && d>=48) {
        printf("%c is a digit", c);
    }
    else if (d<=122 && d>=97) {
        printf("%c is a lower case character", c);
    }
    else if (d<=90 && d>=65) {
        printf("%c is a upper case character", c);
    }
    else {
        printf("%c is a special symbol", c);
    }
    
    return 0;
}