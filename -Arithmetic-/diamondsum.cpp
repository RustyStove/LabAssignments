#include <stdio.h>

int main()
{

    int a,b,c,d;
    int a1,b1,c1,d1;
    int a2,b2,c2,d2;

    scanf("3\n%d %d %d %d\n%d %d %d %d\n %d %d %d %d"
    , &a, &b, &c, &d, &a1, &b1, &c1, &d1, &a2, &b2, &c2, &d2);

    double result1 = (a*2.00) + ((b/2.00)*4.00) + 
                    ((c/3.00)*4.00) + ((d/4.00)*2.00);
    
    
    double result2 = (a1*2.00) + ((b1/2.00)*4.00) + 
                    ((c1/3.00)*4.00) + ((d1/4.00)*2.00);

    
    double result3 = (a2*2.00) + ((b2/2.00)*4.00) + 
                    ((c2/3.00)*4.00) + ((d2/4.00)*2.00);

    printf("%.2lf\n%.2lf\n%.2lf\n", result1, result2, result3);

    return 0;
    
}
