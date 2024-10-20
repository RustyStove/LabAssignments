#include<stdio.h>

int main(){
	int i, j, a;
	scanf("%d", &i);
	
	for (j = 0; j < i; j++){
		char string[2000] = "";
		char secret[2000] = "";
		char secretNumber[2000] = "";
		scanf("%s", string);
		printf("Case #%d:\n", j+1);
		for (a = 0; string[a] != '\0'; a++){
			if (string[a] >= 'A' && string[a] <= 'D'){
				secret[a] = 'A';
			} else if (string[a] >= 'E' && string[a] <= 'H'){
				secret[a] = 'E';
			} else if (string[a] >= 'I' && string[a] <= 'N'){
				secret[a] = 'I';
			} else if (string[a] >= 'O' && string[a] <= 'T'){
				secret[a] = 'O';
			} else if (string[a] >= 'U' && string[a] <= 'Z'){
				secret[a] = 'U';
			}
			if (string[a] == 'A' || string[a] == 'E' || string[a] == 'I' || string[a] == 'O' || string[a] == 'U'){
				secretNumber[a] = '0';
			} else if (string[a] == 'B' || string[a] == 'F' || string[a] == 'J' || string[a] == 'P' || string[a] == 'V'){
				secretNumber[a] = '1';
			} else if (string[a] == 'C' || string[a] == 'G' || string[a] == 'K' || string[a] == 'Q' || string[a] == 'W'){
				secretNumber[a] = '2';
			} else if (string[a] == 'D' || string[a] == 'H' || string[a] == 'L' || string[a] == 'R' || string[a] == 'X'){
				secretNumber[a] = '3';	
			} else if (string[a] == 'M' || string[a] == 'S' || string[a] == 'Y'){
				secretNumber[a] = '4';
			} else if (string[a] == 'N' || string[a] == 'T' || string[a] == 'Z'){
				secretNumber[a] = '5';
			}
		}
		printf("%s\n", secret);
		printf("%s\n", secretNumber);
	}
	
	return 0;
}

