#include <stdio.h>

int main()
{
    char word[100];
    scanf("%[^\n]", word);

    printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n"
    ,word);

    return 0;
    

}
