#include <stdio.h>

int main() {
    int total, perDay, days;
    scanf("%d", &total);
    scanf("%d", &perDay);
    scanf("%d", &days);
    if (total >= perDay * days)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
