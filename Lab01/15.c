#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    float final;
    
    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);

    final = (sub1+sub2+sub3+sub4+sub5)/5;
    if(final>=90 && final<=100) {
        printf("Your grade is A.");
    }
    else if(final>=70 && final<90) {
        printf("Your grade is B.");
    }
    else if(final>=50 && final<70) {
        printf("Your grade is C.");
    }
    else if(final>=40 && final<50) {
        printf("Your grade is D.");
    }
    else {
        printf("Your grade is F.");
    }
    return 0;
}