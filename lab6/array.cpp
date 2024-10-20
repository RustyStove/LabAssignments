#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    
    int index [1000];
    int A [1000];
    int toprint[1000];

    for (int i = 0; i<T; i++){
        scanf("%d",&index[i]);
    }

    for (int j = 0; j<T; j++){
        scanf("%d",&A[j]);
        toprint[j] = A[j];
    }

    for(int k = 0; k<T; k++){
        int index1 = index[k];
        toprint[index1] = A[k];
    }

    for (int i = 0; i < T; i++)
    {
        printf("%d",toprint[i]);
        if(i != T-1) printf(" ");
    }

    printf("\n");


    return 0;
}
