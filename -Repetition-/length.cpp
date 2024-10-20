#include<stdio.h>

int main(){
    int T;
    unsigned long long int number;
    int length;
    scanf("%d",&T);

    for(int i = 0; i<T; i++){
        scanf("%llu", &number);
             if (number >= 10000000000000) printf("Case #%d: 14",i + 1);
        else if (number >= 1000000000000) printf("Case #%d: 13",i + 1);
        else if (number >= 100000000000) printf("Case #%d: 12",i + 1);
        else if (number >= 10000000000) printf("Case #%d: 11",i + 1);
        else if (number >= 1000000000) printf("Case #%d: 10",i + 1);
        else if (number >= 100000000) printf("Case #%d: 9",i + 1);
        else if (number >= 10000000) printf("Case #%d: 8",i + 1);
        else if (number >= 1000000) printf("Case #%d: 7",i + 1);
        else if (number >= 100000) printf("Case #%d: 6",i + 1);
        else if (number >= 10000) printf("Case #%d: 5",i + 1);
        else if (number >= 1000) printf("Case #%d: 4",i + 1);
        else if (number >= 100) printf("Case #%d: 3",i + 1);
        else if (number >= 10) printf("Case #%d: 2",i + 1);
        else printf("Case #%d: 1",i + 1);
        printf("\n");
    }
    
 return 0;
}
