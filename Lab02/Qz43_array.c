#include <stdio.h>

int main() {
    int a[10], i, sum=0, j;
    printf("Enter 10 integers:\n");
    for(i=0; i<10; i++) {
    scanf("%d", &a[i]);
    }
    
    for(j=0; j<10; j++) {
        sum=sum+a[j];
    }
    printf("Sum of the given 10 numbers is %d.", sum);
    return 0;
}