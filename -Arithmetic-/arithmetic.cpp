#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int add = a + b;
    int sub = a - b;
    int times = a * b;
    int divide = a / b;
    int modulus = a % b;

    printf("%d\n%d\n%d\n%d\n%d\n", add, sub, times,divide,modulus);

    return 0;
    
}
