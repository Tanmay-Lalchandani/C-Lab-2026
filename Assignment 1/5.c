 #include <stdio.h>
 
 int main() {
    int a,b,c;
    printf("Enter 2 numbers A and B\n");
    scanf("%d", &a);
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;

    printf("The swapped number now are A=%d and B=%d", a, b);
    return 0;
 }