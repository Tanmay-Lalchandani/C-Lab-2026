#include <stdio.h>

int main() {
    int a;
    float b, c, sum, mult, sub, div;
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division:\n");
    scanf("%d", &a);
    
    switch(a) {
        case 1:
            printf("Enter the two numbers you want to add:\n");
            scanf("%f%f", &b, &c);
            sum = b+c;
            printf("The sum of %0.2f and %0.2f is %0.2f", b, c, sum);
            break;
        case 2:
            printf("Enter the two numbers you want to subtract:\n");
            scanf("%f%f", &b, &c);
            sub = b-c;
            printf("The subtraction of %0.2f and %0.2f is %0.2f", b, c, sub);
            break;
        case 3:
            printf("Enter the two numbers you want to multiply:\n");
            scanf("%f%f", &b, &c);
            mult = b*c;
            printf("The product of %0.2f and %0.2f is %0.2f", b, c, mult);
            break;
        case 4:
            printf("Enter the two numbers you want to divide:\n");
            scanf("%f%f", &b, &c);
            div = b/c;
            printf("The quotient of %0.2f and %0.2f is %0.2f", b, c, div);
            break;
        default:
            printf("Sorry, nothing matched.\n");
        
    }

    return 0;
}