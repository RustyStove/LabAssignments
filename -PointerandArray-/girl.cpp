#include <stdio.h>

int main(){

	int T, distinct;
	char string[100000];
    scanf("%d", &T);
    
    for(int i=0 ; i<T ; i++){
        distinct = 0;
        int alphabet[26] = {0};
        scanf("%s", string);
        
        for(int j=0 ; string[j] != '\0' ; j++){
            alphabet[string[j] - 97]++;
        }
        
        for(int k=0 ; k<26 ; k++){
            if(alphabet[k] > 0){
                distinct++;
            }
        }
        
        if(distinct % 2){
            printf("Case #%d: Ewwww\n", i+1);
        }
        else{
            printf("Case #%d: Yay\n", i+1);
		}
    }
    return 0;
}
