#include <stdio.h>
#include <string.h>
void length() {
    char s[1000];
    scanf("%[^\n]", s);
    printf("The string is %d characters long.\n", strlen(s));
      
}

int main() {
    printf("Enter a word or sentence:\n");
    length();
    return 0;
}