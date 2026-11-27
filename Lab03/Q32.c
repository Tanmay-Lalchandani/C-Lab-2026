#include<stdio.h>

int strlength(char string[]) {
    int i=0,length=0;
    while(string[i]!='\0') {
        length++;
        i++;
    }
    return length;
}

int main() {
    char str[50],temp;

    printf("\nEnter String: ");
    scanf("%s", str);
    int length=strlength(str);

    printf("\nLength: %d", length);
    printf("\nOriginal string: %s", str);

    for(int i=0; i<length/2; i++) {
        temp= str[i];
        str[i]= str[length-i-1];
        str[length-i-1]= temp;
    }
    
    printf("\nReversed string : %s", str);
    return 0;
}