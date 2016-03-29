#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double triangle,circle,trapezium,square,rectangle;
    triangle = 0.5 * a *c;
    circle = 3.14159 * c * c;
    trapezium = 0.5 * (a + b) *c;
    square = b * b;
    rectangle = a * b;
    printf("TRIANGULO: %.3f\n", triangle);
    printf("CIRCULO: %.3f\n", circle);
    printf("TRAPEZIO: %.3f\n", trapezium);
    printf("QUADRADO: %.3f\n", square);
    printf("RETANGULO: %.3f\n", rectangle);

    return 0;
}
