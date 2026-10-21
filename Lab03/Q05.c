#include <stdio.h>

int main() {
    int i, temp, n, j;
    printf("How many integers?\n");
    scanf("%d", &n);
    int a[n];    
    printf("Enter %d random integers for Bubble Sort:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(j=0; j<n-1; j++) {
        for(i=0; i<n-1-j; i++) {
            if(a[i]>a[i+1]) {
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
            }
        }
    }
    printf("Sorted array in ascending order is:\n");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}