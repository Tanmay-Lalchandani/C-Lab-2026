#include <stdio.h>

int main(){
    int n;
    printf("Enter a number to get its multiplication table:\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d*%d = %d\n", n, i, n*i);
    }
    return 0;
}