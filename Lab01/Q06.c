#include <stdio.h>

int main() {
      int a,b;
    printf("Enter 2 numbers A and B\n");
    scanf("%d", &a);
    scanf("%d", &b);
    a = a + b;  
    b = a - b;  
    a = a - b;
    printf("The swapped number now are A=%d and B=%d", a, b);
    return 0;
}