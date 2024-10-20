#include <stdio.h>

int main()
{
    double a, c, e;
    double b, d, f;
   

    scanf("3\n%lf %lf\n%lf %lf\n%lf %lf",&a, &b, &c, &d, &e, &f);
   
    double result1 = (b * a) / 100.00;
    double result2 = (c * d) / 100.00;
    double result3 = (e * f) / 100.00;
   
    printf("%.2lf\n%.2lf\n%.2lf\n", result1, result2, result3);
    
}
