#include <stdio.h>
int main(){
    FILE *fp = fopen("testdata.in", "r");

    int t;
    fscanf(fp, "%d\n", &t);
    while(t != 0){
    	
        char x[100];
        fscanf(fp, "%s", x);

        int n;
        fscanf(fp, "%d", &n);

        char ch;

        int counter[26] = {0};
        for(int i = 0; i < n; i++){
            int j = 0;
            fscanf(fp, "%c", &ch);

            char a, b;
            fscanf(fp, "%c %c", &a, &b);
            counter[a - 65]++;
            while(x[j]){
                if(x[j] == a && counter[a - 65] <= 1){
                    x[j] = b;
                }
                j++;
            }
        }
        int count[26] = {0};
        int j = 0;
        while(x[j] != '\0'){
            int ind = x[j] - 65;

            count[ind] += 1;

            j++;
            counter[j]++;
        }
        for(int i = 0; i < 26; i++){
            if(count[i] > 0){
                printf("%c %d\n", (i + 65), count[i]);
                count[i] = 0;
            }
        }
        t--;
    }
    return 0;
}
