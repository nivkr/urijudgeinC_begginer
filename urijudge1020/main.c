#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, aux=0;

    scanf("%d", &N);

    printf("%d ano(s)\n", N/365);
    aux=N%365;
    printf("%d mes(es)\n", aux/30);
    printf("%d dia(s)\n", aux%30);

    return 0;
}
