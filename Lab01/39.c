#include <stdio.h>

int main() {
    int n, i, fact=1, m, t;
    printf("Enter lenth of series-n:\n");
    scanf("%d", &n);
    for(m = 1; m<=n; m++) {
        printf("%d/%d! ", m, m);
    }
    printf("\n= ");

    for(i = 1; i<=n; i++) {
        fact=fact*i;
        printf("%d/%d ", i, fact);
    }
    
    
    
    
    return 0;
}