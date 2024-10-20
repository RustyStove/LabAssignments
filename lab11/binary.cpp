#include <stdio.h>
#include <string.h>

long long int search(long long int low, long long int high, long long int m){

	long long int answer = 0;
	long long int mid;
	long long int result;

    while (low <= high){

        mid = (high - low) / 2 + low;
        result = (mid * (mid + 1) * (2 * mid + 1)) / 6;

        if (result < m){
            low = mid + 1;

        }else if (result >= m){

            answer = mid;
			high = mid - 1;
        }
    }
    return answer;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {

        long long int M;
        scanf("%lld", &M);
        long long int result = search (1, 1500000, M);
        printf("Case #%d: %lld\n", i + 1, result);
    }
    return 0;
}
