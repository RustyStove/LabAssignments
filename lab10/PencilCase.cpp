#include <stdio.h>
#include <string.h>
#define PI 3.14


int main () {

   int T;
   float R, H, surface_area;
   scanf("%d", &T);

   for(int i = 0; i<T; i++){
      scanf("%f %f", &R, &H);
      surface_area = 2 * (PI) * R * (R + H);

      printf("Case #%d: %.2f\n", i + 1, surface_area);

   }
   
}
