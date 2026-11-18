#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], a;
    int i, j=0, k;

    printf("Enter string:\n");
    scanf(" %s", s1);
    
    printf("Enter character to check in string:\n");
    scanf(" %c", &a);
    k = strlen(s1);
    
    for(i=0; i<k; i++) {
        if(s1[i] == a) {
            j++;
        }
    }
    if(j == 0) {
        printf("The character '%c' does not occur in the string %s.\n", a, s1);
    }
    else {
        printf("The character '%c' occurs %d times in the string %s.\n", a, j, s1);
    }

    return 0;
}