#include <stdio.h>

int main()
{
   double x;
   double y;
   
   scanf("%d %d", &x, &y);
   
   double result = (x * 100) / y;
   
   printf("%.2f%%\n", result);
   

    return 0;

}
