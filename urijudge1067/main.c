#include <stdio.h>
#include <stdlib.h>

int main()
{

    int X, i=0;

    scanf("%d", &X);

    if(X>=1 && X<=1000){

        for(i=1; i<=X; i++){
            if(i%2==1)
                printf("%d\n",i);
        }

    }

    return 0;
}
