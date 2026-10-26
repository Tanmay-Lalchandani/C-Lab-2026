#include <stdio.h>

int max(int n, int a[n]) {
    int maxi=a[0], i;
    for(i=0; i<n; i++) {
        if(maxi<a[i]) {
            maxi=a[i];
        }
    }
    return maxi;
}

int main() {
    int n, i;
    printf("How many numbers in array?\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("The maximum number in the array is %d.\n", max(n, a));
    
    return 0;
}