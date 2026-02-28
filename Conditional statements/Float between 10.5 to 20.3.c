#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);

    if (num > 10.5 && num < 20.3)
        printf("Valid Number");
    else
        printf("Invalid Number");

    return 0;
}
