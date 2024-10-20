#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("testdata.in","r");
    int T;
    long long N,A,B;
    
    fscanf(fp, "%d", &T);
    
    for (int i = 1; i <= T; i++){
    	
        fscanf(fp, "%lld %lld %lld", &N, &A, &B);
        
        int length = 0;
        int realcount = 0;
        
        char bin[N];
        
        fscanf(fp, "%s", bin);

    	for(int j = 0; j<=N; j++){
    		
    		if(bin[j] == '1'){
    			length++;
    			
			}else if(bin[j] == '0'|| bin[j] == '\0' ){
				if(length >= A && length <= B){
					realcount++;
					length = 0;
					
				}else length = 0;
			}
		}
        
        printf("Case #%d: %d\n", i, realcount);
    }
    
    fclose(fp);
    return 0;
}
