#include <stdio.h>

int main(){
    int T,A,B,C;
    int back;

    scanf("%d",&T);

    for(int i = 0; i<T; i++){

        scanf("%d %d %d",&A, &B, &C);
        back = A * B/100;
        
        if(back > C){
            printf("Case #%d: %d\n", i+1, C);

        }else{
            printf("Case #%d: %d\n", i+1, back);
        }


    }


    return 0;
}
