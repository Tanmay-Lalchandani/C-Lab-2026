#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

int main() {
    int x, y;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &x, &y);
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    
    return 0;
}