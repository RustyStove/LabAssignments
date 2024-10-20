#include <stdio.h>

int main(){
	int T;
	int N,M,Q;
	int a[100][100], c[100], sum[100];
	scanf("%d", &T);
	for (int i = 1; i <= T; i++){
		scanf("%d %d %d", &N, &M, &Q);
		getchar();
		
		for (int j = 1; j <= N; j++){
			for (int k = 1; k <= M; k++){
				scanf("%d", &a[j][k]);
			}
		}
		
		for (int j = 1; j <= M; j++){
			sum[j] = 0;
			
		}
		
		for (int j = 1; j <= Q; j++){
			scanf("%d", &c[j]);
		}
		
		for (int l = 1; l <= Q; l++){
			for (int k = 1; k <= M; k++){
				sum[k] += a[c[l]][k];
			}
		}
		printf("Case #%d:\n", i);
		for (int j = 1; j <= M; j++){
			if (sum[j] % 2 == 0){
			printf("NO\n");
		}
			else{
			printf("YES\n");
		}
		}
	}
}


