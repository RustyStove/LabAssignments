#include <stdio.h>

int main(){
    int T;
    char str[1001];
    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++){
        scanf("%[^\n]", str);
        printf("Case #%d: ", i+1);
        getchar();
        for(int j = 0; str[j] != '\0'; j++){
            if (str[j] != 'a' && str[j] != 'i' && str[j] != 'u' && str[j] != 'e' && str[j] != 'o' && str[j] != 'A' && str[j] != 'I' && str[j] != 'U' && str[j] != 'E' && str[j] != 'O'){
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
}
