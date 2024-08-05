#include <stdio.h>
#include <math.h>

typedef struct {
    double a;
    double b;
} dd;

typedef struct {
    dd arr[4];
} vdd;

double area(vdd arr) {
    return fabs((((double)1/(double)2) * ((arr.arr[0].a*arr.arr[1].b + arr.arr[1].a * arr.arr[2].b + arr.arr[2].a*arr.arr[3].b + arr.arr[3].a*arr.arr[0].b) - (arr.arr[1].a * arr.arr[0].b + arr.arr[2].a*arr.arr[1].b + arr.arr[3].a*arr.arr[2].b + arr.arr[0].a*arr.arr[3].b))));
}

double dist(dd p1, dd p2) {
    return sqrt( (p1.a - p2.a)*(p1.a - p2.a) + (p1.b - p2.b)*(p1.b - p2.b) );
}

int main() {
    vdd ta, tb;

    for(int i = 0; i < 4; i++)
        scanf("%lf %lf", &ta.arr[i].a, &ta.arr[i].b);

    for(int i = 0; i < 4; i++)
        scanf("%lf %lf", &tb.arr[i].a, &tb.arr[i].b);

    // Ordenar os pontos em ordem crescente
    for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 4; j++) {
            if(ta.arr[i].a > ta.arr[j].a) {
                dd temp = ta.arr[i];
                ta.arr[i] = ta.arr[j];
                ta.arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 4; j++) {
            if(tb.arr[i].a > tb.arr[j].a) {
                dd temp = tb.arr[i];
                tb.arr[i] = tb.arr[j];
                tb.arr[j] = temp;
            }
        }
    }

    double areaA = area(ta);
    double areaB = area(tb);

    if(fabs(areaA - areaB) < 1e-9 || areaB > areaA)
        printf("terreno B\n");
    else
        printf("terreno A\n");

    return 0;
}