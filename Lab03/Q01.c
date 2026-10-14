#include <stdio.h>

int main() {
    int i, j, max, secMax, a[1000], n;
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
    printfg("Max")
    
    return 0;
}