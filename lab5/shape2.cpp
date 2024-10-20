#include <stdio.h>

int main(){
    int T;
    int N;
    scanf("%d",&T);
    for(int l = 1;l <= T;l++){
        scanf("%d",&N);
        if(N%2 != 0 && N < 150){
            for(int i = 1;i <= N;i++){
            for(int j = 1;j <= N;j++){
                if (i == 1 || i == N || j == 1 || j == N || i == j || j == N-i + 1){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
            }
        }
        printf("\n");
    }
    

    return 0;
}


