#include<stdio.h>

int main() {

    int K, N, F, index, count, temp;
    scanf("%d", &K);

    for(int i = 0; i<K; i++){

        scanf("%d", &N);
        int MMR[N];

        for(int j = 0; j<N; j++){
            scanf("%d", &MMR[j]);
        }

        for (int l = 0; l<N-1; l++){

            for (int m = l+1; m<N; m++){
            if (MMR[l] > MMR[m]){
                temp = MMR[l];
                MMR[l] = MMR[m];
                MMR[m] = temp;
                }
            }
        }
        
        scanf("%d", &F);

        printf("CASE #%d: ",i +1);

        count = 0;

        for(int k = 0; k<N; k++){
            if(MMR[k] == F){
                if(k == N-1){

                    printf("%d %d\n",MMR[N-2], MMR[k]);
                    count++;

                }else {
                    printf("%d %d\n",MMR[k], MMR[k+1]);
                    count++;
                }
                break;

            }else continue;
        }

        if(!count){
            printf("-1 -1\n");
        }
    }
}
