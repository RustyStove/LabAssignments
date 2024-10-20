#include <stdio.h>

int main()
{

    int a;

    scanf("%d",&a);

    int result = a + a;
    int result2 = result - 1;

    printf("%d plus %d is %d\nminus one is %d\n", a, a, result, result2);


    return 0;
    
}
