#include <stdio.h>

int floodfill(int row, int column, char array[][200], 
		   int axis, int absis, char sign[][200]){
		   	
	if(axis < 0 || axis >= row || 
	   absis < 0 || absis >= column){
		return 0;
	}
	
	if((array[axis][absis] == 'S'||array[axis][absis] == '.') && !sign[axis][absis]){
		sign[axis][absis] = 'X';
		return 1 + floodfill(row, column, array, axis+1, absis, sign) +
				   floodfill(row, column, array, axis, absis+1, sign) + 
				   floodfill(row, column, array, axis-1, absis, sign) + 
				   floodfill(row, column, array, axis, absis-1, sign);
	}
	return 0;
}

int main(){
	
	int T;
	scanf("%d", &T); 
	getchar();
	
	for(int i = 0; i < T; i++){
		int column, row;
		int axis, absis;
		char table[200][200];
		char sign[200][200];
		scanf("%d %d", &row, &column); 
		getchar();
		
		for(int N = 0; N < row; N++){
			for(int M = 0; M < column; M++){
				scanf("%c", &table[N][M]);
				
				if(table[N][M]=='S') {
					axis = N; 
					absis = M;
				}
				sign[N][M] = 0;
			}
			getchar();
		}
		printf("Case #%d: %d\n", i+1, floodfill(row, column, table, axis, absis, sign)-1);
	}
	return 0;
}
