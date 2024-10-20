#include <stdio.h>

int main(){
	int T, count;
	scanf("%d",&T);
	count = T;
	unsigned long long int room[5000];
	unsigned long long int room1[5000];

	for(int i=0; i<T; i++){
		scanf("%llu",&room[i]);
	}

	for(int i=0; i<T; i++){
		
		for(int j = i + 1; j<T; j++){

			if(room [i] == room[j]){
				count--;
				break;
			}
		}
	}
	printf("%d\n", count);




}

