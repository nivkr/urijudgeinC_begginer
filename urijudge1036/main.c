#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double  a, b, c, delta=0, pos=0, neg=0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    delta=(b*b -(4)*a*c);
    delta=sqrt(delta);
    pos=((-(b)+delta)/(2*a));
    neg=((-(b)-delta)/(2*a));

    if(a!=0 && delta>=0){
    printf("R1 = %.5lf\n", pos);
    printf("R2 = %.5lf\n", neg);
    }else
        printf("Impossivel calcular\n");

    return 0;
}
