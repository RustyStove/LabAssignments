#include <stdio.h>

#define MOD 1000000007  


long long fact(int n) {
  long long result = 1;
  for (int i = 2; i <= n; i++) {
    result = (result * i) % MOD;
  }
  return result;
}

int main(void) {
  int t;
  scanf("%d", &t);  

  for (int i = 1; i <= t; i++) {
    int n;
    scanf("%d", &n);  

    long long result = 1;  
    for (int j = 0; j < n; j++) {
      int a;
      scanf("%d", &a);

      
      result = (result * fact(a)) % MOD;
    }

    
    printf("Case #%d: %lld\n", i, result);
  }

  return 0;
}

