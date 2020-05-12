#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double pi=3.14159;

int main()
{
    double A, B, C, a=0, b=0, c=0, d=0, e=0;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    a=(A*C)/2;
    b=pi*pow(C,2);
    c=((A+B)*C)/2;
    d=pow(B,2);
    e=A*B;

    printf("TRIANGULO: %.3f\n", a);
    printf("CIRCULO: %.3f\n", b);
    printf("TRAPEZIO: %.3f\n", c);
    printf("QUADRADO: %.3f\n", d);
    printf("RETANGULO: %.3f\n", e);

    return 0;
}
