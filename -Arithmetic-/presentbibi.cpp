#include <stdio.h>

int main()
{
    double l,b;
    double h;

    scanf("%lf %lf %lf", &l, &b, &h);

    double result = (l*h) + (3*l*b);

    printf("%.3lf\n", result);




    return 0;
    
}
