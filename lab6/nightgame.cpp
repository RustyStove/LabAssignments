#include <stdio.h>

int main(){
    int T, N;
    scanf("%d",&T);

    for (int i = 0; i<T; i++){
        scanf("%d",&N);
        long long int numbers[N];

        for (int j = 0; j < N; j++){
            scanf("%lld", &numbers[j]);

        }
        N -= 1;
        int count = N-1;
        printf("Case #%d: %lld",i+1,numbers[N]);

        while(count != -1){
            printf(" %lld", numbers[count]);
            count--;
        }
        printf("\n");
    }
    return 0;
}
