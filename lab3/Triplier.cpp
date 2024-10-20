#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d %d %d",&a, &b, &c);
    
    long long int result =(long long) a*b*c;
   
    printf("%lld\n", result);

    return 0;
    
}
