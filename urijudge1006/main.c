#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, MEDIA;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    A*=2;
    B*=3;
    C*=5;

    MEDIA=(A+B+C)/10;

    printf("MEDIA = %.1f\n", MEDIA);

    return 0;
}
