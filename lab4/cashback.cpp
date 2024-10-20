#include <stdio.h>

int main(){
    int t;

    scanf("%d", &t);
    int a [t];
    int b [t];
    int result[t];
    
    for(int i = 0; i < t; i++){
        scanf("%d %d", &a[i], &b[i]);
        
        if (a[i] > b[i]){

            result[i] = 1;

        } else result[i] = 0;

    }

    for(int i = 0; i < t; i++){

        if (result[i] == 1){
            printf("Case #%d: Go-Jo\n", i+1);

        }else{
          printf("Case #%d: Bi-Pay\n", i+1);  
        }

    }

    return 0;
}
