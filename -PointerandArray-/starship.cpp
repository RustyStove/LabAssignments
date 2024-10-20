#include <stdio.h>

int main(){
    int T,N;
    scanf ("%d", &T);

    for(int i = 0; i<T; i++){
        scanf("%d", &N);

        unsigned long long int result[N];
        unsigned long long int minresult[N];
        int success = 0;

        for (int j = 0; j<N; j++){
            scanf("%llu", &result[j]);
        }

        for (int j = 0; j<N; j++){
            scanf("%llu", &minresult[j]);
        }

        for (int j = 0; j<N; j++){
            if(result[j] < minresult[j]){
                success += 1;
            }
        }

        printf("Case #%d: %d\n", i + 1, success);
    }

    return 0;
} 

