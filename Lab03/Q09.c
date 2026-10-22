#include <stdio.h>

int main() {
    int i, j, a[3][3], temp;
    printf("Enter 9 numbers to form a 3x3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("3x3 array is:\n");
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of array is:\n");
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    
    
    return 0;
}