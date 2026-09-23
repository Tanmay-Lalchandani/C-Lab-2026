#include <stdio.h>

int main() {
    int n,  i, factor;
    printf("Enter any positive number:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(n%i==0) {
            factor=i;
        printf("Factors of %d are %d ", n, factor);
        }
    
    }
    return 0;
}