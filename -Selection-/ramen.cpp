#include <stdio.h>

int main(){

    int T,K,N,M;
    int have;

    scanf("%d", &T);

    for(int i=0; i<T; i++){

        scanf("%d %d %d",&K,&N,&M);
        have = N+M;

        if(have >= K){
            printf("Case #%d: yes\n",i+1);

        }else{
            printf("Case #%d: no\n",i+1);

        }


    }

    return 0;
}



