#include <stdio.h>

int main()
{
    double l,b,h;
    
    scanf("%lf %lf %lf", &l, &b, &h);

    double a = (2 * (0.5 * b * h) + (3 * (l * b)));
    
    printf("%.3lf\n", a);


    return 0;
    
}
