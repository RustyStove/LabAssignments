#include <stdio.h>

static int count = 0;

int lili(int);;

int main(){
	int T,X;
	scanf("%d",&T);
	
	for(int i = 0; i<T; i++){
		scanf("%d", &X);
		printf("\n");
		printf("Case #%d: %d %d\n", i+1, lili(X), count);
	}
}

int lili(int F){
	count++;
	if (F == 0){
		return 1;
	}else if (F == 1){
		return 2;
	}else if((F % 5) == 0){
		return F*2;
	}else{
		printf("%d", F);
		return lili(F-1) + F + lili(F-2) + F - 2;
	}
	
}



