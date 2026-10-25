#include <stdio.h>
void check(int a) {
    if(a%2==0) {
        printf("%d is an even number.\n", a);
    }
    else {
        printf("%d is an odd number.\n", a);
    }
}

int main() {
    int a;
    printf("Enter any number:\n");
    scanf("%d", &a);
    check(a);
    
    return 0;
}