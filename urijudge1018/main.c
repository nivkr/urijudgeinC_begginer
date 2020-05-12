#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned long int N, a=0, b=0, c=0, d=0, e=0, f=0, g=0;

    scanf("%lu", &N);

    if(N>0 && N<1000000){

    a=N%100;
    b=a%50;
    c=b%20;
    d=c%10;
    e=d%5;
    f=e%2;

    system("cls");

    printf("%lu\n", N);
    printf("%lu nota(s) de R$ 100,00\n",     N/100);
    printf("%lu nota(s) de R$ 50,00\n",      a/50);
    printf("%lu nota(s) de R$ 20,00\n",      b/20);
    printf("%lu nota(s) de R$ 10,00\n",      c/10);
    printf("%lu nota(s) de R$ 5,00\n",       d/5);
    printf("%lu nota(s) de R$ 2,00\n",       e/2);
    printf("%lu nota(s) de R$ 1,00\n",       f/1);

    }

    return 0;
}
