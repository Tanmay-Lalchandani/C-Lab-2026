#include <stdio.h>
void vowel() {
    char c;
    scanf("%c", &c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("%c is a vowel\n", c);
    else
        printf("%c is not a vowel\n", c);
    
}

int main() {
    printf("Enter any letter:\n");
    vowel();
    return 0;
}