#include <stdio.h>


int main(){
    int T;
    int N,M;
    scanf("%d",&T);

    for(int i = 0; i < T; i++){
        scanf("%d %d", &N, &M);

        unsigned long long int  choco[M];
        unsigned long long int  heaviest[N];
        unsigned long long int  total = 0;

        for (int l = 0; l<N; l++){
        	
            for (int j = 0; j<M; j++){
                scanf("%llu", &choco[j]);
            }

            heaviest[l] = choco[0];

            for(int k=0; k<M; k++){
                if(heaviest[l]<choco[k]){

                    heaviest[l] = choco[k];

                }   
            }
        }

        for (int a = 0; a<N; a++){
            total += heaviest[a];
        }

        printf("Case #%d: %llu\n", i+1, total);
    }
    


    return 0;
} 
