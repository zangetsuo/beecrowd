#include <stdio.h>

#define PI 3.14159

int main() {
    double A, B, C;
    double triangle_area, circle_area, trapezoid_area, square_area, rectangle_area;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangle_area = (A * C) / 2;
    circle_area = PI * (C * C);
    trapezoid_area = ((A + B) * C) / 2;
    square_area = B * B;
    rectangle_area = A * B;

    printf("TRIANGULO: %.3lf\n", triangle_area);
    printf("CIRCULO: %.3lf\n", circle_area);
    printf("TRAPEZIO: %.3lf\n", trapezoid_area);
    printf("QUADRADO: %.3lf\n", square_area);
    printf("RETANGULO: %.3lf\n", rectangle_area);

    return 0;
}
