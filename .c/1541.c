#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int ladoA, ladoB, porc;

    while (1) {
        scanf("%d", &ladoA);
        if (ladoA == 0)
            break;

        scanf("%d %d", &ladoB, &porc);

        printf("%d\n", (int) sqrt((ladoA * ladoB * 100) / porc));
    }

    return 0;
}