#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior=-9999, i;

    for(i=0; i<3; i++){
        scanf("%d", &num);
        if(num>maior)
            maior=num;
    }

    printf("%d eh o maior\n", maior);

    return 0;
}
