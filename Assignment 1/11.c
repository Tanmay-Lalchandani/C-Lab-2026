#include <stdio.h>

int main() {
    int d, h, m, s;
    printf("Enter time in seconds:\n");
    scanf("%d", &s);

    if (s<60) {
        printf("Time is 0:0:0:%d\n", s);
    }
    else if (s<3600 && s>=60) {
        int m = s/60;
        s = s%60;
        printf("Time is 0:0:%d:%d\n", m, s);
    }
    else if (s<86400 && s>=3600) {
        
        int m = s/60;
        int h = m/60;
        m = m%60;
        s = s%60;
        printf("Time is 0:%d:%d:%d\n", h, m, s);
    }
    else {
        
        int m = s/60;
        int h = m/60;
        int d = h/24;
        h = h%24;
        m = m%60;
        s = s%60;
        printf("Time is %d:%d:%d:%d\n", d, h, m, s);
    }
    

    return 0;
}