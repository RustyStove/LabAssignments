#include <stdio.h>

int main()
{
double A;
double B;

scanf("3\n%lf %lf", &A, &B);
double result1 =(A*B) / 360;

scanf("%lf %lf", &A, &B);
double result2 =(A*B) / 360;

scanf("%lf %lf", &A, &B);
double result3 =(A*B) / 360;

printf("%.2lf\n%.2lf\n%.2lf\n", result1, result2, result3);

return 0;

}
