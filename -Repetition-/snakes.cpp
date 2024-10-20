#include <stdio.h>

int main(){
    int n;
    int total = 0;

    scanf("%d", &n); 
    int num[n];

    for(int i = 0; i != n; i++){
        scanf("%d", &num[i]);
        total += num[i];
        total %= 100;
        printf("%d",total);
		
		switch(total){
			case 9:
				total = 21;
			case 33:
				total = 42;
			case 76:
				total = 92;
			case 53:
				total = 37;
			case 80:
				total = 59;
			case 97:
				total = 88;	
		}
    }

    printf("%d\n", total);

    return 0;
}
