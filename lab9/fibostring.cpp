#include <stdio.h>

int fibonacci(int N){
    int f[N + 1];
    int i;
  
    f[0] = 0;
    f[1] = 1;
  
    for (i = 2; i <= N; i++) {
        
        f[i] = f[i - 1] + f[i - 2];
    }
  
    return f[N];

}

int main(){

	int T,n, temp;
	char s1,s2;

	scanf("%d", &T);

	for(int i = 0; i<T; i++){
		int count = 0;
		char word[611];
		scanf("%d %c %c",&n, &s1, &s2);

		printf("Case #%d: ", i+1);

		for(int j = 1; j<=n; j++){

			temp = fibonacci(j);

			if(j % 2 == 0){
				for(int k = 0; k<temp; k++){
					word[count] = s1;
					count++;
				}

			}else{

				for(int k = 0; k<temp; k++){
					word[count] = s2;
					count++;
				}
			}
		}

		temp = fibonacci(n + 1);

		for(int l = 0; l<temp; l++){
			printf("%c", word[l]);
		}

		printf("\n");
	}

}
