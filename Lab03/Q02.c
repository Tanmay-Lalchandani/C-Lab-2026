#include <stdio.h>

int main() {
    int i, n, a[10], b[10], c[10];
    printf("Enter first 10 integers:\n", n);
    for(i=0; i<10; i++) {
    scanf("%d", &a[i]);
    }
    printf("Enter next 10 number to add:\n");
    for(i=0; i<10; i++) {
    scanf("%d", &b[i]);
    }

    for(i=0; i<10; i++) {
        c[i] = a[i] + b[i];
    }

    printf("Addition of corresponding numbers is:\n");
    for(i=0; i<10; i++) {
    printf("%d ", c[i]);
    }
    
    return 0;
}