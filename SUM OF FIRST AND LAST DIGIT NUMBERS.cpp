#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int last = N % 10;

    int first = N;
    while (first >= 10)
        first /= 10;

    int sum = first + last;
    printf("%d", sum);

    return 0;
}
