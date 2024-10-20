#include <stdio.h>

int main(){
    int T; 
    scanf("%d", &T);
 
    for (int times = 0; times<T; times++){
        long int matrix1[50][50];
        long int matrix2[50][50];
        long int matrix3[50][50];
        long int temp[50][50];
        long int result[50][50];
        long int N;
        scanf("%ld", &N);
  
        for (int i = 0; i<N; i++){
            for (int j = 0; j<N; j++){
                scanf("%ld", &matrix1[i][j]);
            }
        }
  
        for (int i = 0; i<N; i++){
            for (int j = 0; j<N; j++){
                scanf("%ld", &matrix2[i][j]);
            }
        }
  
        for (int i = 0; i<N; i++){
            for (int j = 0; j<N; j++){
                scanf("%ld", &matrix3[i][j]);
            }
        }
  
        for (int i = 0; i<N; i++){
            for (int j = 0; j<N; j++){
                temp[i][j] = 0;
            	for (int k = 0; k<N; k++){
                	temp[i][j] += matrix1[i][k] * matrix2[k][j];
	            }
	        }        
        }
  
        for (int i = 0; i<N; i++){
            for (int j = 0; j<N; j++){
                result[i][j] = 0;
            	for (int k = 0; k<N; k++){
                	result[i][j] += temp[i][k] * matrix3[k][j];
            	}
        	}
        }
        printf("Case #%d:\n", times + 1);
        for (int i = 0; i<N; i++){
            for (int j = 0; j<N; j++){
                printf("%d", result[i][j]);
                if (j != N-1){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
