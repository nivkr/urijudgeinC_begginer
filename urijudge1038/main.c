#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, num;
    float res=0;

    scanf("%d %d", &cod, &num);

    switch(cod){

    case 1: res=4*num;
            printf("Total: R$ %.2f\n", res);
    break;
    case 2: res=4.5*num;
            printf("Total: R$ %.2f\n", res);
    break;
    case 3: res=5*num;
            printf("Total: R$ %.2f\n", res);
    break;
    case 4: res=2*num;
            printf("Total: R$ %.2f\n", res);
    break;
    case 5: res=1.5*num;
            printf("Total: R$ %.2f\n", res);
    break;
    }

    return 0;
}
