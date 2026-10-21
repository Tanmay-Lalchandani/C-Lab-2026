#include <stdio.h>

int main() {
    int i, j, max, secMax, a[1000], n, temp;
    printf("Enter number of integers:\n");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
    }
    max=a[0];
    
    for(j=0; j<n; j++) {
        if(a[j]<a[j+1]) {
            max=a[j+1];
        }
    }
    printf("Max: %d", max);

    temp=a[0];
    a[0] = max;
    max=temp;
    //printf("%d %d", a[0], max);

    secMax=a[1]; 
    for(j=0; j<n; j++) {
        if(a[j]<a[j+1]) {
            max=a[j+1];
        }
    }

    
    return 0;
}