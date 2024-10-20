#include <stdio.h>

int main(){
    int N,Q;
    int B [101];
    int C [101];
    int A;

    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        scanf("%d", &B[i]);
    }

    scanf("%d",&Q);

    for(int j = 0; j < Q; j++){
        scanf("%d %d", &A, &C[j]);

        B[A - 1] = C[j];
        
        printf("Case #%d:",j + 1);
        
        for (int k = 0; k<N; k++){
            printf(" %d",B[k]);
        } 
        printf("\n");
    }



    return 0;
} 
