#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double n = 3.14159;

int main()
{

   double raio, area=0;

   scanf("%lf", &raio);

   area=n*pow(raio,2);

   printf("A=%.4f\n", area);

    return 0;
}
