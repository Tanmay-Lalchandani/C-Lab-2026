#include <stdio.h>

int main() {
    int hour, minute, second, total;
    printf("Enter time in hours:minutes:seconds:\n");
    scanf("%d%d%d", &hour, &minute, &second);

    total = (hour*60*60) + (minute*60) + second;

    printf("Total time in seconds is %d", total);
    return 0;
}