#include <stdio.h>
int main() {
    int base, height;
    scanf("%d %d", &base, &height);
    if (base < 1 || base > 100 || height < 1 || height > 100) {
        printf("Base and height must be between 1 and 100.\n");
        return 1;
    }
    float area = (base * height) / 2.0;
    printf("Area of triangle: %.2f\n", area);
return 0;
}

