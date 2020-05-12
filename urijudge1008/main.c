#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numf=0, numh=0;
    float valoh=0;

    scanf("%d", &numf);
    scanf("%d", &numh);
    scanf("%f", &valoh);

    valoh=valoh*numh;

    printf("NUMBER = %d\n", numf);
    printf("SALARY = U$ %.2f\n", valoh);


    return 0;
}
