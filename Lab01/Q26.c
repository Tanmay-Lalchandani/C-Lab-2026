#include <stdio.h>

int main() {
    int i, j, n, sum1=0, sum2=0;
    printf("Enter any number:\n");
    scanf("%d", &n);
    
     for(i=2; i<=n; i=i+2) {
            sum1= sum1+i;
    }
        printf("Sum of all even numbers between O and %d is %d.\n", n, sum1);
    
    for(i=1; i<=n; i=i+2) {
            sum2= sum2+i;
    }
        printf("Sum of all odd numbers between O and %d is %d.\n", n, sum2);
    
    return 0;
}