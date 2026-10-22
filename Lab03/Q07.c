#include <stdio.h>

int main() {
    int i, j, a[3][3], min, max;
    printf("Enter 9 numbers to form a 3x3 matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    min=a[0][0];
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(min>a[i][j]) {
                min=a[i][j];
            }
        }
    }
    max=a[0][0];
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(max<a[i][j]) {
                max=a[i][j];
            }
        }
    }
    printf("3x3 array is:\n");
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Maximum and minimum elements are %d and %d.\n", max, min);
    return 0;
}