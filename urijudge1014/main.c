#include <stdio.h>
#include <stdlib.h>

int main()
{
    double X, Y;

    scanf("%lf", &X);
    scanf("%lf", &Y);

    X/=Y;

    printf("%.3f km/l\n", X);

    return 0;
}
