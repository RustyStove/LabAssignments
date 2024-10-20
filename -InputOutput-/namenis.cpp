#include <stdio.h>

int main()
{
    char name[100], a[8];
    int u;

    scanf("%[^\n]%*c",name);
    scanf("%s %d",&a, &u);
    printf("Name: %s\n", name);
    printf("NIS: %s\n", a);
    printf("Age: %d\n", u);

    return 0;

}
