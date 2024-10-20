#include <stdio.h>

int main(){
    int T;
    int N;
    
    scanf("%d",&T);

    for (int i = 0; i<T; i++){
        scanf("%d",&N);
        unsigned long long int  first = 0;
        unsigned long long int  second = 1, third;
        printf("%llu", second);

        for (int j = 0; j<N - 1; j++){
            third = first + second;
            printf(" %llu", third);
            first = second;
            second = third;
        }
        printf("\n");
    }
    return 0;
} 

