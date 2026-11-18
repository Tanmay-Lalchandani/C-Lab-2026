#include<stdio.h>

int main() {
    char s1[50],s2[50];

    printf("\nEnter first String: ");
    scanf("%s", s1);

    printf("\nEnter second string: ");
    scanf("%s", s2);
    int i=0,j=0;

    while(s1[i]!='\0') {
        i++;
    }

    while(s1[j]!='\0') {
        s1[i]=s2[j];
        i++;
        j++;
    }

    printf("\nConcatenated String: %s", s1);
    return 0;
}