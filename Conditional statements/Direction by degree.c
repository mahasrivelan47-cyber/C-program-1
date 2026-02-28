#include <stdio.h>

int main() {
    int degree;
    scanf("%d", &degree);

    if (degree >= 0 && degree < 90)
        printf("North\n");
    else if (degree >= 90 && degree < 180)
        printf("East\n");
    else if (degree >= 180 && degree < 270)
        printf("South\n");
    else if (degree >= 270 && degree <= 360)
        printf("West\n");
    else
        printf("Invalid degree\n");

    return 0;
}
