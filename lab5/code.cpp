#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    getchar();
    int length = 1000;
    char text[length];
    char result[length];
    char convert[11] = "OIZEASGTBP";
    
    for(int i = 0; i<T; i++){
    	scanf("%[^\n]s", &text);
    	getchar();
        
        int k = 0;

        for(int j=0; j<length; j++){
        	
            if(((text[j]>65) && (text[j]<90)) || (text[j] == 32)){
                result[k] = text [j];
                k++;

            }else if(text[j] == 48){
                result[k] = convert[0];
                k++;
            }else if(text[j] == 49){
                result[k] = convert[1];
                k++;
            }else if(text[j] == 50){
                result[k] = convert[2];
                k++;
            }else if(text[j] == 51){
                result[k] = convert[3];
                k++;
            }else if(text[j] == 52){
                result[k] = convert[4];
                k++;
            }else if(text[j] == 53){
                result[k] = convert[5];
                k++;
            }else if(text[j] == 54){
                result[k] = convert[6];
                k++;
            }else if(text[j] == 55){
                result[k] = convert[7];
                k++;
            }else if(text[j] == 56){
                result[k] = convert[8];
                k++;
            }else if(text[j] == 57){
                result[k] = convert[9];
                k++;

            }else if (text[j] == NULL){
                result[k]= '\0';
                k++;
            }

        }

        
        result[k]= '\0';
        printf("Case #%d: %s\n", i+1, result);
    	
	}
        


    
}
