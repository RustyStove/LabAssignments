#include <stdio.h>

int main(){
 int T;
 long int N;
 long int a;
 long int b;
 long int numbers[2000];
 scanf("%d", &T);
 for (int i = 1; i <= T; i++){
  scanf("%ld", &N);
  for (int j = 1; j <= N; j++){
   scanf("%ld", &numbers[j]);
  }
  scanf("%ld %ld", &a, &b);
  if (numbers[a] < numbers[b]){
   printf("Case #%d : Lili\n", i);
  }
  else if (numbers[a] == numbers[b]){
   printf("Case #%d : Draw\n", i);
  }
  else if (numbers[a] > numbers[b]){
   printf("Case #%d : Bibi\n", i);
  }
 }
}
