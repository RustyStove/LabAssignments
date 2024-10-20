#include <stdio.h>
#include <string.h>

int main(){
    int T;
    int M;
    char string[1000];
    int length;
    scanf("%d", &T);

    for (int i = 0; i<T; i++){
        scanf("%s", string);
        getchar();

        length = strlen(string);

        scanf("%d", &M);
        getchar();

        for(int j = 0 ; j < M; j++){
            char A;
            char B;

            scanf("%c %c",&A, &B);
            getchar();
            
            for(int k = 0; k<length; k++){
                if (string[k] == A){
                    string[k] = B;
                }
            }
        }
        printf("Case #%d: %s\n",i+1, string);
    }

    
    return 0;
} 

