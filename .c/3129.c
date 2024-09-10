#include <stdio.h>

#define MAXSIZE 10123

int v[MAXSIZE];

int main(int argc, char **argv)
{
    int n, x;
    int r = 0, d = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);

        if (!v[x])
            ++d;
        else
            ++r;

        ++v[x];
    }

    printf("%d\n%d\n", d, r);

    return 0;
}