#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    double sal, total;

    gets(nome);
    scanf("%lf", &sal);
    scanf("%lf", &total);

    total=((15*total)/100)+sal;

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}
