#include <stdio.h>
void display(char name[], int price, char author[]) {
    printf("Name of book is %s\n", name);
    printf("Price of book is Rs. %d\n", price);
    printf("Author of book is %s\n", author);
    
}

int main() {
    int price;
    char name[100], author[100];
    printf("Enter name, price and author of book:\n");
    scanf("%99[^\n] %d %99[^\n]", name, &price, author);
    

    display(name, price, author);
    
    return 0;
}