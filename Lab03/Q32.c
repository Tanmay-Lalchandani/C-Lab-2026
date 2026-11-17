#include<stdio.h>

int strlength(char string[]) {
    int i=0,length=0;
    while(string[i]!='\0') {
        length+=1;
        i++;
    }
    return length;
}

int main() {
    char str[20],temp;

    printf("\nEnter String:-> ");
    scanf("%s", str);
    int length=strlength(str);

    printf("\nLENGTH: %d", length);
    printf("\nORIGINAL STRING: %s", str);

    for(int i=0;i<length/2;i++) {
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
    
    printf("\nREVERSED STRING: %s", str);
    return 0;
}