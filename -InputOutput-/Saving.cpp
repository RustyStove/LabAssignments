#include <stdio.h>

int main()
{
    int x;
    double y; 
    scanf("%d %lf", &x, &y);
    
    double  z = x * y / 100;
    double  result = z + x;
    
    z = result * y / 100;
    result += z;
    
    z = result * y / 100;
    result += z;

   printf("%.2lf\n", result);

    return 0;

}
