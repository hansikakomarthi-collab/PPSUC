#include <stdio.h>
int main() {
    int X, A, B;
    scanf("%d %d %d", &X, &A, &B);

    // Calculate total points
    int totalPoints = A * 1 + B * 2;

    // Check if professor qualifies
    if (totalPoints >= X)
    printf("Qualify");
    else
        printf("Not Qualify");

    return 0;
}
