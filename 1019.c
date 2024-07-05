#include <stdio.h>

int main(){
    int tempo, h, m, s;
    scanf("%d", &tempo);

    h = tempo / 3600;
    m = (tempo % 3600) / 60;
    s = (tempo % 3600) % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;

}