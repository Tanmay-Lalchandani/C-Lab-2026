#include<stdio.h>

int main() {
    int src[20],dest[20];

    printf("\nEnter String to be Copied:-> ");
    scanf("%s", src);
    int i=0;

    while(src[i]!='\0') {
        dest[i]=src[i];
        i+=1;
    }
    
    printf("\n%s from src is copied to dest (%s).", src,dest);
    return 0;
}