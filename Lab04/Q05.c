#include <stdio.h>
#include <string.h>

int main() {
    char s1[50]; 
    int i, k, m, lc=0, uc=0, ss=0, digits=0;

    printf("Enter string:\n");
    scanf("%[^\n]", s1);
    k=strlen(s1);

    for(i=0; i<k; i++) {
        if((int) s1[i]<=122 && (int) s1[i]>=97) {
            lc++;
        }
        else if((int) s1[i]<=90 && (int) s1[i]>=65) {
            uc++;
        }
        else if((int) s1[i]<=57 && (int) s1[i]>=48) {
            digits++;
        }
        else {
            ss++;
        }
    }

    printf("Uppercase letters: %d\nLowercase letters: %d\nDigits: %d\nSpecial symbols: %d", uc, lc, digits, ss);
    

    return 0;
}