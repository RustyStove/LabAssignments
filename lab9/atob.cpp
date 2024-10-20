#include<stdio.h>

int main() {

    int T;
    unsigned long long int A,B,temp;
    scanf("%d", &T);

    for(int i = 0; i<T; i++){

        scanf("%llu %llu", &A, &B);

        temp = A;

        printf("Case #%d: ",i+1);

        while(temp != B){
            if((temp % 2) == 0){

                temp = temp/2;

            }else if(temp == 1 && temp != B){
                break;

            }else temp = (temp * 3) + 1;
        }
        if (temp == B){
            
            printf("YES\n");

        } else printf("NO\n");
    }
}

