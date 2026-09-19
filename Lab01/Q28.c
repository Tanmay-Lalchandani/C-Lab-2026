#include <stdio.h>
#include <math.h

int main() {
    /*Armstrong number: 153= 1^3 + 5^3 + 3^3 = 1+125+27= 153*/
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
        sum=sum+pow(rem, dig);
        printf("Digit %d: %d.\n", i, rem);
    }
    
    if(t==0) {
        printf("0 is an armstrong.\n");
    }
    else {
    if(sum=t) {
        printf("%d is an armstrong.\n", t);
    }
    else {
        printf("%d is not an armstrong.\n", t);
    }
}
    return 0;
}