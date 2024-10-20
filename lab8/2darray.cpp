#include <stdio.h>

int main(){
	int N,M,Q;
	int X,Y,A;
	int arrnum[200][200];
	
	scanf("%d %d %d", &N, &M, &Q);
	
	for (int i = 0; i < Q; i++){
		
		scanf("%d %d %d", &X, &Y, &A);
		arrnum[X][Y] = A;
	}
	
	for (int j = 0; j < N; j++){
		
		for (int k = 0; k < M; k++){
			
			printf("%d", arrnum[j][k]);
			
			if (k != M - 1){
				
				printf(" ");
				
			}
		}
		
		printf("\n");
		
	}
}
