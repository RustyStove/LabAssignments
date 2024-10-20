#include <stdio.h>

int main()
{
    int hits;
    long long int a = 0;
    long long int addeddamage;
    long long int totaldamage = 0;

    scanf("%d", &hits);

for(int i = 1; i <= hits; i++){ 
        addeddamage = 100 + a;
        a += 50;
        totaldamage = totaldamage + addeddamage;
    }
    

    printf("%lld\n", totaldamage);

    

    return 0;
    
}
