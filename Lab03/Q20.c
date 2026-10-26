#include <stdio.h>
#include <math.h>
int prime(int a) {
    if(a==1) {
        return 0;
    }
    else if(a==2 || a==3) {
        return 1;
    }
    else {
     for(int i=2; i<=sqrt(a); i++) {
        if(a%i==0) {
            return 0;
        }
        else {
            return 1;
        }

    }
}
}

int main() {
    int n;
    printf("Enter a positive number:\n");
    scanf("%d", &n);
    printf("%d\n", prime(n));
    
    return 0;
}