#include <stdio.h>

	int main(){
		long long int T, num1, num2, finalanswer = 0;
		scanf("%lld", &T);
        
		for (int i = 0; i < T; i++){
			long long int sum = 0, a = 1, n;
			
			scanf("%lld %lld", &num1,&num2);
			
			while (num1 || num2){
				n = (num1 % 10) + (num2 % 10);
				n = n % 10;
				sum += n * a;
				num1 /= 10;
				num2 /= 10;
				a *= 10;
			}
            
			finalanswer = sum;
			
			printf("Case #%lld: %lld\n", i + 1, finalanswer);
		}
	}
