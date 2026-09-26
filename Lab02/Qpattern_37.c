#include <stdio.h>


//48-57
int main() {
    int n, i;
    printf("Enter number of rows for pyramid:\n");
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
    
    for(int t=49; t<=48+i; t++) {
        printf("%c", t);
    }
    printf("\n");
    }
    return 0;
}
