#include <stdio.h>

char p(int n, int a) {
    if (n % (a * 2) / a == 1)
        return 'o';
    else
        return ' ';
}

int main() {
    int horario[2];

    printf("Enter the hour and minute: ");
    scanf("%d:%d", &horario[0], &horario[1]);

    while (!feof(stdin)) {
        int h, m;
        h = p(horario[0], 8);
        m = p(horario[1], 32);

        printf(" ____________________________________________\n");
        printf("|                                            |\n");
        printf("|    ____________________________________    |_\n");
        printf("|   |                                    |   |_)\n");
        printf("|   |   8         4         2         1  |   |\n");
        printf("|   |                                    |   |\n");
        printf("|   |   %c         %c         %c         %c  |   |\n", h, h, h, h);
        printf("|   |                                    |   |\n");
        printf("|   |                                    |   |\n");
        printf("|   |   %c     %c     %c     %c     %c     %c  |   |\n", m, m, m, m, m, m);
        printf("|   |                                    |   |\n");
        printf("|   |   32    16    8     4     2     1  |   |_\n");
        printf("|   |____________________________________|   |_)\n");
        printf("|                                            |\n");
        printf("|____________________________________________|\n\n");

        printf("Enter the hour and minute: ");
        scanf("%d:%d", &horario[0], &horario[1]);
    }

    return 0;
}