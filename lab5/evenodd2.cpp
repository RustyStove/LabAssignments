#include <stdio.h>

int main(){
    int T;
    int N;
    int A[1000];
    int odd[1000];
    odd[0] -= 2;
    int even[1000];
    scanf("%d",&T);

    for(int i = 0; i<T; i++){
        scanf("%d", &N);

        for(int j = 0; j<N; j++){
            scanf("%d", &A[j]);
        }

        for (int k = 0; k<N; k++){

            if((A[k] % 2 == 0)){
                even[i] += 1;
                

            }else{
                odd[i] += 1;
            }
        }
    }
    for(int i = 0; i<T; i++){
        printf("Odd group : %d integer(s).\n", odd[i]);
        printf("Even group : %d integer(s).\n", even[i]);
        printf("\n");
    }
}
