#include <stdio.h>

int main() {
    /*Armstrong number: 153= 1^3 + 5^3 + 3^3 = 1+125+27= 153*/
    int i, n, sum, dig, m, rem;
    printf("Enter any number:\n");
    scanf("%d", &n);
    m=n;
    if(n==0) {
        dig = 1;
    }
    else {for(dig=0; n!=0 ; dig++) {
        n=n/10;
    }
}
    printf("Number of digits in %d is %d.\n", m, dig);
    for(i=1; i<=dig; i++) {
        rem=m%10;
        m=m/10;
        printf("The digits are %d.\n", rem);
        helloooo
    }
    return 0;
}