#include <stdio.h>

int main() {
    int a[10], pos=0, neg=0, i, j, zero=0;
    printf("Enter 10 integers:\n");
    for(i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    for(j=0; j<10; j++) {
    if(a[j]>0) {
        pos++;
    }
    else if (a[j]<0) {
        neg++;
    }
    else {
        zero++;
    }
    }
    printf("There are %d positive numbers, %d negative numbers and %d zeroes(0) in the list.", pos, neg, zero);
    return 0;
}
    