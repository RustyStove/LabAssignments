#include <stdio.h>

int main(){

	int T;

	scanf("%d", &T);

	for(int i = 1; i<=T; i++){
		long long N, X, final, remainder = 0, reverse = 0;

		scanf("%llu", &N);
		X = N;

		while (N != 0){
			remainder = N % 10;
			reverse = reverse * 10 + remainder;
			N /= 10;
		}
		final = X + reverse;
		printf("Case #%d: %lld\n",i, final);

	}

}


