#include <stdio.h>
#include <stdlib.h>

const double pi=3.14159;

int main()
{
    double raio, volume=0;

    scanf("%lf", &raio);

    volume=(4.0/3)*pi*pow(raio,3);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}
