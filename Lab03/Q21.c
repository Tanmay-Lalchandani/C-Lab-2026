#include <stdio.h>
int factorial(int a) {
    if(a==0 || a==1) {
        return 1;
    }
    return a * factorial(a-1);
    

}
int Combination(int n, int r) {
    int C;
    C = factorial(n)/(factorial(r) * factorial(n-r));
}

int main() {
    int n, r;
    printf("Enter 'n' and 'r' for nCr:\n");
    scanf("%d%d", &n, &r);
    printf("Value of nCr is %d.\n", Combination(n, r));
    
    return 0;
}