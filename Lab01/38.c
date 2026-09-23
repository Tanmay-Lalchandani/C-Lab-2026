#include <stdio.h>

int main() {
    int n, sqr;
    printf("Enter lenth of series-n:\n");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++) {
        sqr = i*i;
        printf("%d ", sqr);
    }
    return 0;
}