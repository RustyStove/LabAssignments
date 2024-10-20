#include <stdio.h>

int main(){
    int N,index;
    scanf("%d %d", &N, &index);
    char word[N];
    int M;
    scanf("%s", &word);

    for (int i = 0; i<index; i++){
        scanf("%d", &M);

        if(word[M] >= 'A' && word[M] <= 'Z') {
            word[M] = word[M] + 32;

        }else if(word[M] >= 'a' && word[M] <= 'z') {

            word[M] = word[M] - 32;
        }
    }

    printf("%s\n", word);


    return 0;
}
