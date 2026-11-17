#include<stdio.h>
#include<string.h>

int main() {
    char c[20];
    printf("\nEnter String:-> ");
    scanf("%s", c);

    int length=strlen(c);
    printf("\nLENGTH : %d", length);
    return 0;
}