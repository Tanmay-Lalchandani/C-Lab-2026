#include <stdio.h>


//48-57
int main() {
    int n, i, t, j;
    printf("Enter number of rows for pyramid:\n");
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
    
    for(int t=49; t<=49+i; t++) {
        printf("%c", t);
    }
    for(int j=48+i; j>=49; j--) {
        printf("%c", j);
    }
    printf("\n");
    }
    return 0;
}