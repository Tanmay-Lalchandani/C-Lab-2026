#include <stdio.h>


int main() {
    
    int i, n, sum=0, dig, m, rem, t;
    printf("Enter any number:\n");
    scanf("%d", &n);
    m=t=n;
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
        sum=sum+rem;
        printf("Digit %d: %d.\n", i, rem);
        
    }
    printf("Sum of individual digits of %d is %d.\n", t, sum);
    return 0;
}