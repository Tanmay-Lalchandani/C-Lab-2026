#include <stdio.h>
#include <string.h>

int main() {
    char s1[50];
    int i, j=0, k;

    printf("Enter a string:\n");
    scanf(" %s", s1);

    k=strlen(s1);

    for(i=0; i<k; i++) {
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ||
            s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U') {
            j++;
        }
    }
    printf("There are %d vowels in the string.\n", j);
    
    
    return 0;
}