#include <stdio.h>

int main()
{
    char word[100];
    scanf("%s[^\n]", word);

    printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}"
    ,word);

    return 0;
    

}