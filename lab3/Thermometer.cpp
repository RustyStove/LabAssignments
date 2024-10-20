#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("3\n%d\n%d\n%d",&a, &b, &c);
    
    double Aream = a * 4.0/5.0;
    double Afaren = a * 9.0/5.0 + 32.00;
    double Akelv = a + 273;

    double Bream = b * 4.0/5.0;
    double Bfaren = b * 9.0/5.0 + 32.00;
    double Bkelv = b + 273;

    double Cream = c * 4.0/5.0;
    double Cfaren = c * 9.0/5.0 + 32.00;
    double Ckelv = c + 273.00;

    printf("%.2f %.2f %.2f\n", Aream, Afaren, Akelv);
    printf("%.2f %.2f %.2f\n", Bream, Bfaren, Bkelv);
    printf("%.2f %.2f %.2f\n", Cream, Cfaren, Ckelv);
    
    return 0;
    
}
