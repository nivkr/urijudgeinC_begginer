#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, af;

    scanf("%d", &N);

    if(N>5 && N<2000){

        for(i=1; i<=N; i++){

            if(i%2==0){
                af=pow(i,2);
                printf("%d^2 = %d\n",i,af);
             }

         }

     }

    return 0;
}
