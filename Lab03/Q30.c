#include<stdio.h>

int main() {
    char s1[20],s2[20];

    printf("\nEnter S1 String:-> ");
    scanf("%s", s1);

    printf("\nEnter String to be Concated to S1:-> ");
    scanf("%s", s2);
    int i=0,j=0;

    while(s1[i]!='\0') {
        i+=1;
    }

    while(s1[j]!='\0') {
        s1[i]=s2[j];
        i+=1;
        j+=1;
    }

    printf("\nConcated String:-> %s", s1);
    return 0;
}