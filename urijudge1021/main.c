#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int N, b, aux=0;

    scanf("%d.%d", &N, &b);

    if(N<1000000.00){

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", N/100);
    aux=N%100;
    printf("%d nota(s) de R$ 50.00\n", aux/50);
    aux%=50;
    printf("%d nota(s) de R$ 20.00\n", aux/20);
    aux%=20;
    printf("%d nota(s) de R$ 10.00\n", aux/10);
    aux%=10;
    printf("%d nota(s) de R$ 5.00\n", aux/5);
    aux%=5;
    printf("%d nota(s) de R$ 2.00\n", aux/2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", aux%=2);
    printf("%d moeda(s) de R$ 0.50\n", b/50);
    b%=50;
    printf("%d moeda(s) de R$ 0.25\n", b/25);
    b%=25;
    printf("%d moeda(s) de R$ 0.10\n", b/10);
    b%=10;
    printf("%d moeda(s) de R$ 0.05\n", b/5);
    printf("%d moeda(s) de R$ 0.01\n", b%=5);
    }

    return 0;
}
