#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);

    for (int i = 0; i <T; i++){
        unsigned long long int a,b,c,total = 0;

        scanf("%llu %llu %llu", &a, &b, &c);

        if (a+b > c){
            printf("BISA\n");

        }else printf("TIDAK BISA\n");

    }
}
