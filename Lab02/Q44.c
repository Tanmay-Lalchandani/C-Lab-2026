#include <stdio.h>

int main() {
    
    float unit, bill;
    printf("Enter number of units of electricity used by you:\n");
    scanf("%f", &unit);
    if(unit<=200) {
        bill=0.50*unit;
    }
    else if(unit>200 && unit<=400) {
        bill=100+ 0.65*(unit-200);
    }
    else if(unit>400 && unit<=600) {
        bill= 230 + 0.8*(unit-400);
    }
    else {
        bill= 425+ 1.25*(unit-600);
    }
    printf("The electricity bill on using %0.2f units of electricity is Rs. %.2f.", unit, bill);
    return 0;
}