#include <stdio.h>

int main(){
	int N;
	char array[100][100];
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			scanf("%c", &array[i][j]);
		}
		getchar();
	}
	
	for (int k = N - 1; k >= 0; k--){
		for (int l = N - 1; l >= 0; l--){
			printf("%c", array[k][l]);
			}
		printf("\n");
		}
}
