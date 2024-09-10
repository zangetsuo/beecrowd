#include <stdio.h>
#include <stdbool.h>

void quickSort(long long *carneiros, unsigned tam);
void quickSortInterno(long long *carneiros, long inicio, long fim);

int main()
{
    unsigned casos, i;
    unsigned qtsCarneiros;
    unsigned qtsVistos;

    scanf("%u", &casos);

    while (casos--)
    {
        scanf("%u", &qtsCarneiros);
        long long carneiros[qtsCarneiros];

        for (i = 0; i < qtsCarneiros; i++)
            scanf("%lld", &carneiros[i]);

        quickSort(carneiros, qtsCarneiros);

        qtsVistos = 1;
        for (i = 1; i < qtsCarneiros; i++)
        {
            if (carneiros[i] != carneiros[i - 1])
                qtsVistos++;
        }

        printf("%u\n", qtsVistos);
    }

    return 0;
}

void quickSortInterno(long long *carneiros, long inicio, long fim)
{
    if (inicio >= fim)
        return;

    long long pivo = carneiros[(inicio + fim) / 2];
    long int i = inicio;
    long int j = fim;

    while (i <= j)
    {
        while (carneiros[i] < pivo)
            i++;
        while (carneiros[j] > pivo)
            j--;

        if (i <= j)
        {
            long long temp = carneiros[i];
            carneiros[i] = carneiros[j];
            carneiros[j] = temp;
            i++;
            j--;
        }
    }

    quickSortInterno(carneiros, inicio, j);
    quickSortInterno(carneiros, i, fim);
}

void quickSort(long long *carneiros, unsigned tam)
{
    quickSortInterno(carneiros, 0, tam - 1);
}
