#include <stdio.h>

int main(){
    int T;
    int N;
    int A[1000];
    scanf("%d",&T);

    for(int i = 0; i<T; i++){
        scanf("%d", &N);
        int odd = 0;
        int even = 0;

        for(int j = 0; j<N; j++){
            scanf("%d", &A[j]);
        }

        for (int k = 0; k<N; k++){

            if((A[k] % 2 == 0)){
                even += 1;

            }else{
                odd += 1;
            }
        }
        printf("Odd group : %d integer(s).\nEven group : %d integer(s).\n", odd,even);
        printf("\n");
    }  
}


