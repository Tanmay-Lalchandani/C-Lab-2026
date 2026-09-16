#include <stdio.h>

int main() {
    char a;
    float b, c, sum, mult, sub, div;
    printf("Enter any 2 numbers:\n");
    scanf("%f%f", &b, &c);
    printf("Enter A for addition, B for subtraction, C for multiplication and D for division:\n");
    scanf(" %c", &a);
    
    switch(a) {
        case 'A':
            
            sum = b+c;
            printf("The sum of %0.2f and %0.2f is %0.2f", b, c, sum);
            break;
        case 'B':
            
            sub = b-c;
            printf("The subtraction of %0.2f and %0.2f is %0.2f", b, c, sub);
            break;
        case 'C':
            
            mult = b*c;
            printf("The product of %0.2f and %0.2f is %0.2f", b, c, mult);
            break;
        case 'D':
            
            div = b/c;
            printf("The quotient of %0.2f and %0.2f is %0.2f", b, c, div);
            break;
        default:
            printf("Sorry, nothing matched.\n");
        
    }

    return 0;
}