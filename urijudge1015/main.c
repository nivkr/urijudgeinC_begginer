#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, resp=0;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    x2-=x1;
    y2-=y1;
    resp=sqrt(pow(x2,2)+(pow(y2,2)));

    printf("%.4f\n", resp);


    return 0;
}
