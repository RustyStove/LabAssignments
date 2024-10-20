#include <stdio.h>

int main(){
    int x,y,z;

    scanf("%d %d %d", &x,&y,&z);

    if ((z-x) == (y-z) && y>=x){
        int floor = y-z;
        printf("%d\n", floor);

    }else{
        printf("-1\n");
    }


    return 0;
}
