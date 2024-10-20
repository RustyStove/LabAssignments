#include <stdio.h>
#include <string.h>


struct dupe{
	
	char dupednumber[20];
	int count;
	
};

int main(){
	int X, Y;
	scanf("%d", &X);
	
	for(int i = 0; i<X; i++){
		scanf("%d", &Y);
		char truenumber [100][20] = {" "};
		
		for(int j = 0; j<Y; j++){
			char number [50] = " ";
			
			scanf("%s", number);
			getchar();
			
			int k = 0;
			int index = 0;
			
			while(number[k] != '\0'){
				if(number[k] == '-'){
					k++;

				}else if(index == 3){
					truenumber[j][index] = '-';
					index++;
					
				}else if(number[k] == 'A' || number[k] == 'B' || number[k] =='C'){
					truenumber[j][index] = '2';
					index++;
					k++;
					
				}else if(number[k] == 'D' || number[k] == 'E' || number[k] =='F'){
					truenumber[j][index] = '3';
					index++;
					k++;
					
				}else if(number[k] == 'G' || number[k] == 'H' || number[k] =='I'){
					truenumber[j][index] = '4';
					index++;
					k++;
					
				}else if(number[k] == 'J' || number[k] == 'K' || number[k] =='L'){
					truenumber[j][index] = '5';
					index++;
					k++;
					
				}else if(number[k] == 'M' || number[k] == 'N' || number[k] =='O'){
					truenumber[j][index] = '6';
					index++;
					k++;
					
				}else if(number[k] == 'P' || number[k] == 'R' || number[k] =='S'){
					truenumber[j][index] = '7';
					index++;
					k++;
					
				}else if(number[k] == 'T' || number[k] == 'U' || number[k] =='V'){
					truenumber[j][index] = '8';
					index++;
					k++;
					
				}else if(number[k] == 'W' || number[k] == 'X' || number[k] =='Y'){
					truenumber[j][index] = '9';
					index++;
					k++;
				}else{
					truenumber[j][index] = number[k];
					index++;
					k++;
				}
			}
		}
		
		dupe dupes[Y];
		int dupecount = 0;
	
		for(int m = 0; m<Y; m++){
			if(strcmp(truenumber[m], "0") == 0){
				continue;
			}
			
			int tempcount = 0;
			
			for(int n = m + 1; n<=Y;n++){
				if(strcmp(truenumber[m],truenumber[n]) == 0){
					tempcount++;
					strcpy(truenumber[n], "0");
				}
			}
			
			if(tempcount > 0){
				dupes[dupecount].count = tempcount + 1;
				strcpy(dupes[dupecount].dupednumber, truenumber[m]);
				dupecount++;
			}
		}
		
		for(int m = 0; m<dupecount; m++){
			for(int n = m+1; n<dupecount;n++){
				char strtemp[20] = " ";
				int counttemp = 0;
				if(strcmp(dupes[m].dupednumber,dupes[n].dupednumber)>0){
					strcpy(strtemp, dupes[m].dupednumber);
					counttemp = dupes[m].count;
					
					strcpy(dupes[m].dupednumber, dupes[n].dupednumber);
					dupes[m].count = dupes[n].count;
					
					strcpy(dupes[n].dupednumber, strtemp);
					dupes[n].count = counttemp;
				}
			}
		}
		
		
		int g = 0;
		
		if(dupecount == 0) {
			printf("No duplicates.\n");
		} else{
			while (g<dupecount){
				printf("%s %d\n", dupes[g].dupednumber, dupes[g].count);
				g++;
			}
		}
		
		printf("\n");
	}
	return 0;
}
