#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, velomed;
    double litros;

    scanf("%d", &tempo);
    scanf("%d", &velomed);

    litros=tempo*velomed;
    litros/=12;

    printf("%.3f\n", litros);

    return 0;
}
