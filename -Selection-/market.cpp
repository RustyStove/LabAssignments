#include <stdio.h>

int main(){
    int daging, sayur, telur;

    scanf("%d %d %d", &daging, &sayur, &telur);

    if(daging>sayur && daging>telur && sayur>telur){
        printf("Daging\nSayur\nTelur\n");
    }
    else if(daging>sayur && daging>telur && telur>sayur){
        printf("Daging\nTelur\nSayur\n");
    }
    else if(sayur>daging && sayur>telur && telur>daging){
        printf("Sayur\nTelur\nDaging\n");
    }
    else if(sayur>daging && sayur>telur && daging>telur){
        printf("Sayur\nDaging\nTelur\n");
    }
    else if(telur>daging && telur>sayur && sayur>daging){
        printf("Telur\nSayur\nDaging\n");
    }
    else if(telur>daging && telur>sayur && daging>sayur){
        printf("Telur\nDaging\nSayur\n");
    }

    return 0;
}
