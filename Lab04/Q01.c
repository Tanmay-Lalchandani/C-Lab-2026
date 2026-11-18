#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    int i, j;
    printf("Enter string:\n");
    scanf("%s", s1);
    printf("Length of string is %d\n", strlen(s1));

    printf("Enter string:\n");
    scanf("%s", s1);
    strcpy(s2, s1);
    printf("%s has been copied to destination: %s\n", s1, s2);
    
    printf("Enter first string\n");
    scanf("%s", s1);
    printf("Enter second string\n");
    scanf("%s", s2);
    printf("Concatenation of the two strings is: %s\n", strcat(s1, s2));

    printf("Enter first string\n");
    scanf("%s", s1);
    printf("Enter second string\n");
    scanf("%s", s2);
    if(strcmp(s1, s2) == 0) {
        printf("The two strings are same.\n");
    }
    else {
        printf("The two strings are not same.\n");
    }
    
    printf("Enter string\n");
    scanf("%s", s1);
    printf("The reversed string is %s\n", strrev(s1));

    return 0;
}