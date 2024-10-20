#include <stdio.h>
#include <string.h>

int main(){
    int T;
    int N;
    char str[100];
    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++){
        scanf("%d", &N);
        int count1 = 0;
        int count2 = 0;
        
        
        scanf("%s", str);
        N = strlen(str);
        

        for (int j = 0; j < N; j++){
            while (str[j] != '\0'){
                if (str[j] == 'L'){
                count1++;
                break;

                }else if (str[j] == 'B'){
                count2++;
                break;
                }
            }
        }

        if (count1 > count2){
            printf("Lili\n");
        }
        else if (count1 < count2){
            printf("Bibi\n");
        }
        else if (count1 == count2){
            printf("None\n");
        }
    }
}
