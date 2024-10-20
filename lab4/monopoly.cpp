#include <stdio.h>

int main(){
    int n;
    int total = 0;

    scanf("%d", &n); 
    int num[n];
    /* how many number will be counted
    and making an array to hold all the number*/

    for(int i = 0; i != n; i++){
        scanf("%d", &num[i]);
        total += num[i];
        /*scans the number to be added and places it in array num
		adds the number in i place of the array num*/

        if(total == 30){
            total = 10;
        } else if(total == 12){
            total = 28;
        } else if(total == 35){
            total = 7;
        }

        total = total % 40;
        /*anyhing below 40 will stay the same
        but above it will reset so if 41 it turns back to 1*/
    }

    printf("%d\n", total);

    return 0;
}
