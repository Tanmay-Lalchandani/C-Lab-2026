#include <stdio.h>

int main() {
    int a[10], even=0, odd=0, i, j;
    printf("Enter 10 integers:\n");
    for(i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    for(j=0; j<10; j++) {
    if(a[j]%2==0) {
        even++;
    }
    else {
        odd++;
    }
    }
    printf("There are %d odd numbers and %d even numbers in the list.", odd, even);
    return 0;
}