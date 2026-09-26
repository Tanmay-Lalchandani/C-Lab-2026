#include <stdio.h>

int main() {
    int n, i, p=1;
    printf("Enter number of rows for pyramid:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(int j=n-p; j>=1; j--) {

          printf(" ");
          
    }
    p++;
    for(int t=1; t<=i; t++) {
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}