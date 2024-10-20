#include <stdio.h>

void horse(int c1, int y1, int c2, int y2, int count, int *temp){
	if(c1>8 || y1>8 || c2>8 || y2>8 ) return;
	if(c1==c2 && y1==y2 && count<*temp){
		*temp=count;
		return;
	}
	if(count<6){
		horse(c1+1,y1+2,c2,y2,count+1,temp);
		horse(c1-1,y1+2,c2,y2,count+1,temp);
		horse(c1+1,y1-2,c2,y2,count+1,temp);
		horse(c1-1,y1-2,c2,y2,count+1,temp);
		horse(c1+2,y1+1,c2,y2,count+1,temp);
		horse(c1-2,y1+1,c2,y2,count+1,temp);
		horse(c1+2,y1-1,c2,y2,count+1,temp);
		horse(c1-2,y1-1,c2,y2,count+1,temp);
	}
}

int main(){
	
	int test, y1, y2;
	char x1, x2;
	
	scanf("%d", &test);getchar();
	
	for(int i=0; i<test; i++){
		int temp=6;
		scanf("%c%d %c%d", &x1, &y1, &x2, &y2);
		getchar();
		int c1 = x1%'A';
		int c2 = x2%'A';
		
		horse(c1,y1,c2,y2,0,&temp);
		
		printf("Case #%d: %d\n", i+1, temp);
	}




return 0;
}


