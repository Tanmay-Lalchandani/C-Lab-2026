#include <stdio.h>

int main() {
    int n,  i, factor;
    printf("Enter any positive number:\n");
    scanf("%d", &n);
    printf("Factors of %d are:\n", n);

    for(i=1; i<=n/2; i++) {
        if(n%i==0) {
            factor=i;
        printf("%d ", factor);
        }
    
    }
    printf("%d", n);
    return 0;
}