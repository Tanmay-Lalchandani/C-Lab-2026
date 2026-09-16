#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int mult=n;
    for(int i =n-1; i>=1; i--) {
        mult=mult*i;
    }
    printf("Value of %d! is %d.", n, mult);
    return 0;
}