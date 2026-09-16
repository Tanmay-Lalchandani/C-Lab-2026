#include <stdio.h>
#include <math.h>

int main() {
    /*1+x where n=1
1+x/n where n=2
 1 +x^n when n=3
1 + nx when n>3 or n<1*/
    float Y, x;
    int n;
    printf("Enter value of x and integer n:\n");
    scanf("%f%d", &x, &n);
    switch(n) {
        case 1:
            Y=1+x;
            printf("Formula used is Y=1+x and value of Y is %.2f", Y);
            break;
        case 2:
            Y=1+(x/n);
            printf("Formula used is Y=1+(x/n) and value of Y is %.2f", Y);
            break;
        case 3:
            Y=1+pow(x, n);
            printf("Formula used is Y=1+pow(x, n) and value of Y is %.2f", Y);
            break;
        default:
            Y=1+n*x;
            printf("Formula used is Y=1+n*x and value of Y is %.2f", Y);
    }
    return 0;
} 