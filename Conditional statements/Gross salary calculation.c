#include <stdio.h>

int main() {
    float basic, hra, da, gross;
    scanf("%f", &basic);
    if (basic <= 70000) {
        hra = 0.30 * basic;
        da  = 0.80 * basic;
    } else {
        hra = 0.35 * basic;
        da  = 0.90 * basic;
    }
    gross = basic + hra + da;

    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
