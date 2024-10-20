#include <stdio.h>

int main(){

	int N;

	scanf("%d", &N);

	int matrix[N][N];
	int matrix1[N][N];

	for (int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			scanf("%d",&matrix[i][j]);
		}
	}

	for (int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			printf("%d",matrix[j][i]);
			if(j != N-1) printf(" ");
		}
		printf("\n");
	}


}

