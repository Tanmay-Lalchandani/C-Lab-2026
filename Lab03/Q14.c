#include <stdio.h>

int main() {
    int i, j, target, a[100], n, count=0;
    printf("How many integers?\n");
    scanf("%d", &n);
    
    printf("Enter %d random integers:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the target element:\n");
    scanf("%d", &target);
    for(i=0; i<n; i++) {
        if(target==a[i]) {
            count++;
        }
    }
    printf("There are %d occurences of the target (%d) in the array.\n", count, target);
    
    return 0;
}