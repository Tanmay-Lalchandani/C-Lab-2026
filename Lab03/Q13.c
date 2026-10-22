#include <stdio.h>

int main() {
    int i, j, key, a[100], n;
    printf("How many integers?\n");
    scanf("%d", &n);
    
    printf("Enter %d random integers:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the key:\n");
    scanf("%d", &key);
    for(i=0; i<n; i++) {
        if(key==a[i]) {
            printf("Key (%d) found at index %d\n", key, i);
            return 0;
        }
    }
    printf("Key not found.\n");
    return 0;
}