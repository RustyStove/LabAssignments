#include <stdio.h>

int main(){
    int T;
    int score[3];
    int jlbscore;
    int score2[100];
    int sum = 0;
    int average;
    scanf("%d",&T);

    for (int i = 0; i<3; i++){
        scanf("%d", &score[i]);
        jlbscore += score[i];
    }

    for (int i = 0; i<T; i++){
        scanf("%d", &score2[i]);
        sum = sum + score2[i];
    }

    average = (sum + jlbscore) / (T+3);

    if (score[0] >= average){
        printf("Jojo lolos\n");
    }else{
        printf("Jojo tidak lolos\n");
    }

    if (score[1] >= average){
        printf("Lili lolos\n");
    }else{
        printf("Lili tidak lolos\n");
    }

    if (score[2] >= average){
        printf("Bibi lolos\n");
    }else{
        printf("Bibi tidak lolos\n");
    }
    
    


 return 0;
}
