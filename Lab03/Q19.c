#include <stdio.h>

int fibo(int a) {
    int next;
    if(a==1 || a==2) {
        return a-1;
    }

    next = fibo(a-2) + fibo(a-1);

    return next;

}

int main() {
    int b, n;
    printf("Enter length of fibonacci series: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        printf("%d ", fibo(i));
    }
    return 0;
}