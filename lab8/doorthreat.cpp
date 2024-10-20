#include <stdio.h>

int main(){

	int T;
	scanf("%d",&T);

	for (int i = 0; i<T; i++){
		int N = 0, M = 0;

		scanf("%d %d",&N, &M);

		int doors[10050] = {0};
		int temp= 0;
		int temp2 = 0;
		int count = 0;

		for(int j = 0; j<M; j++){
			int X = 0;

			scanf("%d", &X);

			for (int k = 1; k<=N; k++){

				temp = k % X;

				if (temp == 0){
					doors[k] += 1;
				}
			}
		}

		printf("Case #%d:", i+1);

		for(int l = 1; l<=N; l++){

			temp2 = doors[l] % 2;

			if(temp2 == 0){
				printf(" %d", l);
				count += 1;
			}
		}

		if(count == 0){
			printf(" No room left!");
		}

		printf("\n");
	}
}
