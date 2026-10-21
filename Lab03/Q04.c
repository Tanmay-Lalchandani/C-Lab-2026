#include <stdio.h>

int main() {
    int i, a[10], min, temp, x, j, n;
    printf("How many integers?\n");
    scanf("%d", &n);
    int a[n];    
    printf("Enter %d random integers for Selection Sort:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(j=0; j<n-1; j++) {
        min=a[j];
        x=j;
    for(i=j; i<n; i++) {
        if(min>a[i]) {
            min=a[i];
            x=i;
        }
    }
    a[x]=a[j];
    a[j]=min;
    }
    printf("Sorted array in ascending order is:\n");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}