#include <stdio.h>

int main()
{
    char name[100];
    char name2[100];
    double height;
    double height2;
    int age;
    int age2;

    scanf("%s %lf %d %s %lf %d", 
    &name, &height, &age, &name2, &height2, &age2);

    printf("Name 1: %s\n", name);
    printf("Height 1: %.2lf\n", height);
    printf("Age 1: %d\n", age);
    printf("Name 2: %s\n", name2);
    printf("Height 2: %.2lf\n", height2);
    printf("Age 2: %d\n", age2);
    
    return 0;

}
