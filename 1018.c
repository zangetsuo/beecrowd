#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", N);

    int denominations[] = {100, 50, 20, 10, 5, 2, 1};
    int count[7] = {0};

    for (int i = 0; i < 7; i++) {
        count[i] = N / denominations[i];
        N %= denominations[i];
        printf("%d nota(s) de R$ %d,00\n", count[i], denominations[i]);
    }

    return 0;
}
