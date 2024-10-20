#include <stdio.h>
int main(){
    int n, a[105][105], x = 0, y = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == k + 1){
                x += 1;
            }
        }
    }
    
    if(x < n){
      y += 1;
    }
    
    x = 0;
  }
  printf("%d\n", y);
  return 0;
}
