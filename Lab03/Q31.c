#include<stdio.h>

int main() {
    char s1[20],s2[20];
    printf("\nEnter Two Strings:-> ");
    scanf("%s %s", s1,s2);
    int i=0;

    while(s1[i]!='\0' || s2[i]!='\0') {
        if(s1[i]!=s2[i]) {
            printf("\nBOTH STRINGS ARE NOT SAME.");
            return 0;
        }
        i++;
    }
    
    printf("\nBOTH STRINGS ARE SAME.");
    return 0;
}