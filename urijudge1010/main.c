#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod1, numpecas1, cod2, numpecas2;
    float valunit1, valunit2, val1, val2;

    scanf("%d %d %f", &cod1, &numpecas1, &valunit1);
    scanf("%d %d %f", &cod2, &numpecas2, &valunit2);

    val1=numpecas1*valunit1;
    val2=numpecas2*valunit2;
    val1+=val2;

    printf("VALOR A PAGAR: R$ %.2f\n", val1);

    return 0;
}
