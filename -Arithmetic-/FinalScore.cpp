#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%d %d %d",&a, &b, &c);
    float assignment = a*0.2;
    float mid = b*0.3;
    float final = c*0.5;
    float total = assignment + mid + final;
    
    printf("%.2lf\n", total);


    return 0;
    

}
