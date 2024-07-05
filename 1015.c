#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3, dist;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    x3 = x2 - x1;
    y3 = y2 - y1;

    dist = sqrt(pow(x3, 2) + pow(y3, 2));

    printf("%.4lf\n", dist);

    return 0;
}
