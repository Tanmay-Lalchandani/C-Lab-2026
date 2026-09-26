#include <stdio.h>
//65-90
int main() {
    int n, i;
    printf("Enter number of rows for pyramid:\n");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
    
    for(int t=65+i; t<=65+i; t++) {
        for(int j=0; j<=i; j++) {
        printf("%c", t);
        }
    }
    printf("\n");
    }
    return 0;
}