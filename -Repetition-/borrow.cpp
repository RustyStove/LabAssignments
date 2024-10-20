#include<stdio.h>

int main(){
    int T,N;
    unsigned long long int number;
    scanf("%d",&T);

    for(int i = 0; i<T; i++){
        scanf("%d",&N);
        unsigned long long int total = 0;
        for(int j = 0; j<N; j++){
            scanf("%llu", &number);
            total += number;
        }
        printf("Case #%d: %llu\n",i+1, total);
    }
 return 0;
}
