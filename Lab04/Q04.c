#include <stdio.h>
#include <string.h>

int main() {
    char s1[50];
    int i, j, k;

    printf("Enter lowercase string:\n");
    scanf(" %s", s1);
    k=strlen(s1);

    for(i=0; i<k; i++) {
        s1[i] = s1[i] - 32;
    }

    printf("String is uppercase is: %s\n", s1);
    

    
    return 0;
}