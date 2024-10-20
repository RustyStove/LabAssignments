#include <stdio.h>
#include <string.h>


void sorted(char name[1000][11], int num[], int n);

int main() {
  int t, n; 
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    scanf("%d", &n); 
	char s[11], name[n][11];
    int num[n];
    for(int j = 0; j < n; j++){
      scanf(" %[^#]#%d\n", name[j], &num[j]);
    }
    scanf("%s", s);

    sorted(name, num, n);
    printf("Case #%d: ", i+1);
    for(int j = 0; j < n; j++){

      if(!strcmp(s, name[j])){
        printf("%d", j+1);
        break;
      }
    }
    printf("\n");
  }
}


void sorted(char name[1000][11], int num[], int n){
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(num[j] > num[i]){
        // swap num
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
        // swap name
        char tmp[11];
        strcpy(tmp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], tmp);
      }

      else if (num[j] == num[i]){
        if(strcmp(name[j], name[i]) < 0){
          char tmp[11];
          strcpy(tmp, name[i]);
          strcpy(name[i], name[j]);
          strcpy(name[j], tmp);
        }
      }
    }
  }
}
