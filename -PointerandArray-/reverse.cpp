#include <stdio.h>
#include <string.h>

int main(){
    int T;
    char S [1001];
    char S2 [1001];
    
    scanf("%d", &T);
    
    for(int i = 0; i<T; i++){
    	int length = 0;
    	int a = 0;
        scanf("%s", &S);

        length = strlen(S);

        while (length > 0){
            S2[a] = S[length - 1];
            length--;
            a++;
        }
        
        S2[a] = '\0';

        printf("Case #%d : %s\n",i + 1 ,S2);

    }
    
    return 0;
} 

