#include <stdio.h>


int main () {

   int T;
   long long temp = 0, N;

   scanf("%d", &T);

   for(int i = 1; i<=T; i++){
      scanf("%lld", &N);

      printf("Case %d: ", i);

      for(int j = 0; j<= (N - 1); j++){
         temp = (j * j + j) / 2 + 1;
         printf("%lld", temp);
         if(j != N - 1){
         	printf(" ");
		 }

      }
      printf("\n");
   }
}
