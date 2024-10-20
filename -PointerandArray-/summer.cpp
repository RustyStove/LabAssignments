#include<stdio.h>

int main(){
 int T, N;
 long long int array[110000], arraySum[110000], count, result;
 scanf("%lld", &T);
 for (int i = 1; i <= T; i++){
  result = 0;
  count = 0;
  scanf("%lld", &N);
  for (int j = 0; j < N; j++){
   scanf("%lld", &array[j]);
  }
  for(int j = 0; j < N; j++){
   for(int k = j + 1; k < N; k++){
    arraySum[result] = array[k] + array[j];
    result++;
   }
  }
  for(int j = 0; j < N; j++){
   for(int k = 0; k < result; k++){
    if(array[j] == arraySum[k]){
     count++;
     break;
    }
   }
  }
  printf("Case #%lld: %lld\n", i, count);
 }
 
 return 0;
}
