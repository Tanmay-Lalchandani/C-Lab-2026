#include <stdio.h>

int main() {
    int i, j, a[3][3], b[3][3], c[3][3];
    printf("Enter 9 numbers to form a 3x3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter 9 numbers to form another 3x3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("First 3x3 array is:\n");
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Second 3x3 array is:\n");
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            c[i][j]=b[i][j]-a[i][j];
        }
    }
    printf("Difference of the 2 arrays is:\n");
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}