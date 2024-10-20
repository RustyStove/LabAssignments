#include <stdio.h>

int main()
{
    double a,b;

    scanf("%d %d", &a, &b);

    double result = (a-b)/a *100.00;

    printf("%.2lf%%\n", result);

    return 0;
    
}
