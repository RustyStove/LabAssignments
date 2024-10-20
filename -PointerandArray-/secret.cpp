#include <stdio.h>
#include <string.h>

int main(){
    int T;
    int Q;
    scanf("%d",&T);
    getchar();

    for (int i = 0; i<T; i++){
        char S[1000] = "";
        int L = 0,R = 0;
        int z = 0;
        scanf("%d %[^\n]", &Q, &S);
        getchar();

        for(int j = 0; j<Q; j++){
            scanf("%d %d",&L, &R);
            getchar();

            L -= 1;
            R -= 1;

            char S2[1000] = "";
            char S3[1000] = "";

            z = 0;

            for(int k = L; k <= R; k++){
                S2[z] = S[k];
                z++;
            }

            int length = strlen(S2);
            z = 0;
            
            while (length > 0){
                S3[z] = S2[length - 1];
                length--;
                z++;
            }

            z = 0;

            for(int a = L; a <= R; a++){
                S[a] = S3[z];
                z++;
            }
        }
        printf("Case #%d: %s\n",i +1, S);
    }
    return 0;
} 
