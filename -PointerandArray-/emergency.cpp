#include<stdio.h>

int main(){
	long long int T, i, j, k;
	long long int plot, breath, counter, gasFloor, clearFloor;
	char stage[10101];
	scanf("%lld", &T);
	
	for (i = 1; i <= T; i++){
		scanf("%lld %lld", &plot, &breath);
		scanf("%s", stage);
		counter = 0;
		gasFloor = -1;
		clearFloor = -1;
		
		for (j = 0; j < plot; j++){
			if (gasFloor == -1){
				if (stage[j] == '1'){
					gasFloor = j + 1;
				}
			}
			if (stage[j] == '1'){
				counter++;
			}
		}
		
		for (k = plot - 1; k > plot - breath - k; k--){
			if (clearFloor == -1){
				if (stage[k] == '1'){
					clearFloor = k + 1;
				}
			}
		}

		if (plot <= breath){
			printf("Case #%lld: Alive\n", i);
		} else if (counter == 1){
			printf("Case #%lld: Dead\n", i);
		} else if ((clearFloor > plot - breath) && (gasFloor <= breath)){
			printf("Case #%lld: Alive\n", i);
		} else {
			printf("Case #%lld: Dead\n", i);
		}
	}
	
	return 0;
}

