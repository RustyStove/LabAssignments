#include <stdio.h>

int main(){

    int T,N,A,B,C,D;
    
    scanf("%d", &T);

    for (int i = 0; i<T; i++){
        int count = 0;
        scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
        for (int j = 1; j<=N; j++){
            if ((j % A == 0)||(j % B == 0)|| (j % C == 0)||(j % D == 0)){
                count++;
            }
        }
        printf("Case #%d: %d\n",i + 1 ,count);
    }
    return 0;
}
