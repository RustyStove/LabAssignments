#include <stdio.h>

int main(){

    int t,q,a,b;
    int numbers[100];
    int result[100];
    int trueresults[100];
    

    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &q);

    for(int j=0; j<q; j++){
        scanf("%d %d",&a,&b);

        result[j] = numbers[a-1];

        while(a<b){
            result[j] += numbers[a];
            a++;
        }

        printf("Case #%d: %d\n", j+1, result[j]);
    }




    return 0;
}



