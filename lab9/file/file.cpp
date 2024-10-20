#include <stdio.h>
#include <string.h>

int main() {
  FILE *FP = fopen("./testdata.in", "r");

  int T;
  fscanf(FP, " %d", &T);

  char shortword[T][55], longword[T][55];
  for (int i = 0; i < T; i++) {
    fscanf(FP, " %[^#] # %[^\n]", shortword[i], longword[i]);
  }

  int T1;
  fscanf(FP, " %d", &T1);

  for (int j = 0; j < T1; j++) {
    printf("Case #%d:\n", j + 1);

    char S[111];
    fscanf(FP, " %[^\n]", S);

    char *SS = strtok(S, " ");		
    
    while (SS) {

      char F = 0;
      for (int t = 0; t < T; t++) {
        if (!strcmp(SS, shortword[t])) {	
          printf("%s", longword[t]);		
          F = 1;
          break;
        }
      }

      if (!F) {
        printf("%s", SS);
      }

      if ((SS = strtok(NULL, " "))) {
        printf(" ");
      } else {
        printf("\n");
      }
    }
  }

  return 0;
}
