#include<stdio.h>

int main() {
    int src[50],dest[50];

    printf("\nEnter String to be Copied: ");
    scanf("%s", src);
    int i=0;

    while(src[i]!='\0') {
        dest[i]=src[i];
        i++;
    }
    
    printf("\n%s from source is copied to destination: %s.", src,dest);
    return 0;
}