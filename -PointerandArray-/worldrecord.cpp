#include <stdio.h>

int main(){
    int T;
    int N;
    unsigned long long int third;
    
    scanf("%d",&T);

    for(int i = 0; i<T; i++){
        scanf("%d", &N);
        unsigned long long int  first = 0;
        unsigned long long int  second = 1;
        if(N == 1){
            printf("Case #%d: 0\n", i+1);
        }else if(N == 2){
            printf("Case #%d: 1\n", i+1);
        }else{
            for(int j = 0; j<N - 2; j++){
                third = first + second;
                first = second;
                second = third;   
            }
            printf("Case #%d: %llu\n",i+1, third);
        }
    }
    return 0;
} 
