#include <stdio.h>

int main() {
    int i, j, max, secMax, a[1000], n;
    printf("Enter N integers:\n");
    max=a[0];
    for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
    }
    for(j=0; j<n; j++) {
        if(a[j]<a[j+1]) {
            max=a[j+1];
        }
    }
    
    return 0;
}