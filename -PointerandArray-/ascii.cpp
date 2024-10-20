#include <stdio.h>
#include <string.h>

int main(){
    int T;
    int length;
    char S[1001];
    int ascii[1001];

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%s", S);
        length = strlen(S);

        for(int j = 0; j < length; j++){
            ascii[j] = S[j];
        }

        printf("Case %d: %d", i + 1, ascii[0]);

        for(int k = 1; k < length; k++){
            printf("-%d",ascii[k]);
        }
        printf("\n");
    }

    return 0;
} 

