#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, aux;

    scanf("%d", &N);

    printf("%d:",N/3600);
    aux=N%3600;
    printf("%d:",aux/60);
    printf("%d\n", aux%=60);

    return 0;
}
