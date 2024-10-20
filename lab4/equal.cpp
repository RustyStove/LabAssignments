#include <stdio.h>

int main(){
    unsigned long long int a, b, c, d;

    scanf("%llu %llu %llu %llu",&a,&b,&c,&d);

    unsigned long long int x = (unsigned long long)a * b;
    int y = c - d;

    if(x == y) {
        printf("True\n");
        
    } else printf("False\n");

    return 0;
}
