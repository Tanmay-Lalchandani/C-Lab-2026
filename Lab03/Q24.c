#include <stdio.h>

struct book
    {
        char name[100];
        char author[100];
        float price;
    }; struct book *p, a;

void display() {
    p=&a;
    scanf("%99[^\n] %f", p->name, &(*p).price);
    scanf(" %99[^\n]", p->author);
     
    printf("Name of book is %s\n", (*p).name);
    printf("Price of book is Rs. %.2f\n", (*p).price);
    printf("Author of book is %s\n", (*p).author);
    
}


int main() {

    
    printf("Enter name, price and author of book:\n");
    display();

    return 0;
}