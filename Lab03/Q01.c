#include <stdio.h>

int main() {
    int i, j, max, secMax, a[1000], n, x;
    printf("Enter number of integers:\n");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
    }

    max=a[0];
    for(j=0; j<n; j++) {
        if(max<a[j]) {
            max=a[j];
            x = j;
        }
    }
    printf("Max: %d\n", max);

    a[x]=a[0];
    a[0] = max;
    
    secMax=a[1]; 
    for(j=1; j<n; j++) {
        if(secMax<a[j]) {
            secMax=a[j];
        }
    }
    printf("Second Max: %d", secMax);

    
    return 0;
}