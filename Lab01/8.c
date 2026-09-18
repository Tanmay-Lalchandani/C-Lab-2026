#include <stdio.h>

int main() {
    float day, hour, minute;

    minute = 31558150/60;
    hour = minute/60;
    day = hour/24;

    printf("The earth makes one revolution in %0.2f days OR %0.2f hours OR %0.2f minutes", day, hour, minute);

    return 0;
}