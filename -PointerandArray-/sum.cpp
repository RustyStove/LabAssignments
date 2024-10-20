#include <stdio.h>

int main(){
    int T, X;
    long long int a[100][100];
    long long int b[100];
    scanf("%d", &T);
    getchar();

    for (int i = 0; i<T; i++){
        scanf("%d", &X);
        getchar();
        
        for (int j = 0; j<X; j++){
            for (int k = 0; k<X; k++){
                scanf("%lld", &a[j][k]);
                getchar();
            }
        }

        for (int l = 0; l<X; l++){
            long long int temp = 0;
            for (int m = 0; m<X; m++){
                temp +=a[m][l]; 
            }
            b[l] = temp;
        }

        printf("Case #%d:",i + 1);

        for (int n = 0; n<X; n++){
            printf(" %lld", b[n]);

        }
        printf("\n");
    }
    return 0;
} 

