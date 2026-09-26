#include <stdio.h>

int main() {
    int n, i, p=1, m=1, a, b, c, q, x;
    printf("Enter number of rows for pyramid:\n");
    scanf("%d", &n);
    p=(n/2);
    for(i=1; i<=(n+1)/2; i++) {

        for(int j=p; j>=1; j--) {
          printf(" ");
        }
        p=p-1;
    
        for(int t=1; t<=m; t++) {
        if(m<=n) {
        printf("*");
        }
        else {
            break;
        }
        }
        printf("\n");
        m=m+2;
    }
    q=1;
    x=n-2;
    for(a=n/2; a>=1; a--) {

        for(b=1; b<=q; b++) {
        printf(" ");
        }

        for(c=x; c>=1; c--) {
            printf("*");
        }
    
        printf("\n");
        q++;
        x=x-2;

    }
    return 0;
}