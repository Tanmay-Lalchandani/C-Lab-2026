#include<stdio.h>
#include<string.h>

int main() {
    char c[50];
    printf("\nEnter String: ");
    scanf("%s", c);

    int length=strlen(c);
    printf("\nLength of string is %d.", length);
    return 0;
}