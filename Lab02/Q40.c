#include <stdio.h>

int main() {
    int n, sum=0, num;
    printf("Enter numbers, enter negative number to end and calculate sum:\n");

    for(int i=1; 2<4; i++) {
        scanf("%d", &num);
        if(num>=0) {
        sum=sum+num;
        }
        else {
            break;
        }
    }
    printf("Sum of numbers entered is %d.", sum);
    return 0;
}