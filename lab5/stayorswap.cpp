#include <stdio.h>

int main(){
    int t,n,m,k;
    int plate[100];
    scanf("%d",&t);
    getchar;

    for (int i = 0; i<t; i++){
        int highest = 0;
        scanf("%d %d %d", &n, &m,&k);
        getchar;

        for (int j = 0; j < n; j++){
            scanf("%d",&plate[j]);
            getchar;
        }

        for (int l = 0; l < n; l++){
            if (plate[l] > highest && plate[l] <= m ){
                highest = plate [l];
            }
        }
        if (k > highest && k <= m ){
            highest = k;
        }
        printf("Case #%d: %d\n", i+1 ,highest);

    }

    return 0;
}


