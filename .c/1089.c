#include <stdio.h>

int main() {
    int n, i, picos;

    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;

        picos = 0;
        int amostras[n];
        for (i = 0; i < n; i++)
            scanf("%d", &amostras[i]);

        for (i = 1; i < n - 1; i++) {
            if ((amostras[i] < amostras[i - 1] && amostras[i] < amostras[i + 1]) ||
                (amostras[i] > amostras[i - 1] && amostras[i] > amostras[i + 1]))
                picos++;
        }

        if ((amostras[n - 1] > amostras[n - 2] && amostras[n - 1] > amostras[0]) ||
            (amostras[n - 1] < amostras[n - 2] && amostras[n - 1] < amostras[0]))
            picos++;

        if ((amostras[0] > amostras[1] && amostras[0] > amostras[n - 1]) ||
            (amostras[0] < amostras[1] && amostras[0] < amostras[n - 1]))
            picos++;

        printf("%d\n", picos);
    }

    return 0;
}
