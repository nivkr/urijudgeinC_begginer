#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, MEDIA=0;

    scanf("%lf", &A);
    scanf("%lf", &B);

    A*=3.5;
    B*=7.5;
    MEDIA=(A+B)/11;

    printf("MEDIA = %.5f\n", MEDIA);


    return 0;
}
