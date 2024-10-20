#include <stdio.h>

int main(){

    int T;
    long long int N,M;

    scanf("%d", &T);

    for(int i=0; i<T; i++){

        scanf("%lld %lld",&N,&M);

        if (N % 2 != 0 && M % 2 != 0) 
        {
            printf("Case #%d: Need more frogs\n", i+1);
        }
        else 
        {
            printf("Case #%d: Party time!\n", i+1);
        }

        }


    

    return 0;
}



