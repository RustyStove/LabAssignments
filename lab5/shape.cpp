#include <stdio.h>

int main(){
    int T;
    int N[10];
    scanf("%d", &T);

    for(int i = 0; i<T; i++){
        scanf("%d", &N[i]);
        
        for(int j = 0; j<N[i]; j++){
        	
            for(int k = 0; k<N[i]; k++){
            	
                if( j == 0 || j == N[i] - 1){
                	
                    printf("*");
                    
                }else{
                	
                    if(k == 0 || k == j || k == N[i] - (j + 1) || k == N[i] - 1){
                    	
                        printf("*");
                        
                    }else printf(" ");

                }
            }
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
