#include <stdio.h>
#include <math.h>

void armstrong(int n) {
    int i, sum=0, dig, m, rem, t;

    m=t=n;
    if(n==0) {
        dig = 1;
    }
    else {for(dig=0; n!=0 ; dig++) {
        n=n/10;
    }
}

    for(i=1; i<=dig; i++) {
        rem=m%10;
        
        sum=sum+(int)round(pow(rem, dig));
        m=m/10;

    }
    printf("Sum = %d\n", sum);
    
    if(t==0) {
        printf("0 is an armstrong.\n");
    }
    else {
    if(sum==t) {
        printf("%d is an armstrong.\n", t);
    }
    else {
        printf("%d is not an armstrong.\n", t);
    }
}
}
int main() {
    int a;
    printf("Enter any number:\n");
    scanf("%d", &a);
    armstrong(a);
    return 0;
}