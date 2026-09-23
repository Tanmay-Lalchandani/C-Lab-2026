#include <stdio.h>

int main() {
    int i;
    float sales, comm;
    printf("Enter sales in rupees:\n");
    scanf("%f", &sales);
    if(sales<=500) {
        comm=0.05*sales;
    }
    else if(sales>500 && sales<=2000) {
        comm=35+ 0.1*(sales-500);
    }
    else if(sales>2000 && sales<=5000) {
        comm= 185 + 0.12*(sales-2000);
    }
    else {
        comm= 0.125*sales;
    }
    printf("The commission on sale of Rs. %0.2f is Rs. %.2f.", sales, comm);
    return 0;
}