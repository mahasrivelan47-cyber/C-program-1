#include <stdio.h>

int main() {
    int choice;
    float r, area;

    scanf("%d", &choice);

    if (choice == 1) {
        scanf("%f", &r);
        area = 3.14159 * r * r;
        printf("Area of Circle = %.2f", area);
    }
    else {
        printf("Invalid Choice");
    }

    return 0;
}
