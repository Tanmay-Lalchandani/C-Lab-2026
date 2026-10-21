#include <stdio.h>

int main() {
    int i, n, a[10], b[10], temp;
    printf("Enter first 10 integers:\n", n);
    for(i=0; i<10; i++) {
    scanf("%d", &a[i]);
    }
    printf("Enter next 10 number to swap:\n");
    for(i=0; i<10; i++) {
    scanf("%d", &b[i]);
    }
    for(i=0; i<10; i++) {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("\nThe swapped arrays are:\n\n");
    
    for(i=0; i<10; i++) {
    printf("%d ", a[i]);
    }
    printf("\n");
    for(i=0; i<10; i++) {
    printf("%d ", b[i]);
    }
    
    return 0;
}