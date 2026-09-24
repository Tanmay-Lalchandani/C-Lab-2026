#include <stdio.h>

int main() {
    
    int n, div=0, rem;
    printf("Enter any number:\n");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++) {
        rem=n%i;
        if(rem==0) {
            div++;
        }
    }
    if(div==2) {
        printf("%d is a prime number.", n);
    }
    else {
        printf("%d is a composite number.", n);
    }
    
    return 0;
}