#include <stdio.h>

int main() {
    int n, i, j, t;
    printf("Enter number of rows:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(int j=1; j<=i-1; j++) {
            printf("0");
        }
        printf("1");
        for(int t=1; t<=n-i; t++) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}