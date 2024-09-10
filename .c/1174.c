#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N > 0) {
        int X;
        scanf("%d", &X);

        if (X == 0) {
            printf("NULL\n");
        } else if (X % 2 == 0) {
            if (X > 0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }
        } else {
            if (X > 0) {
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }

        N--;
    }

    return 0;
}