#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short int X, i=0;

    scanf("%d", &X);

    for(i=0; i<7; i++){
    if(i%2==1)
        printf("%d\n", i);
    }

    return 0;
}
