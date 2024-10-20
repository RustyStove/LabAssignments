#include<stdio.h>
int main()
{
    int t,n;
    char text[120];
    char result[120];
    
    scanf("%d", &t);
	 
    for(int i=0; i<t; i++){
    	
        scanf("%d", &n);  getchar();
        scanf("%[^\n]", text); getchar();
        
        int k = 0;

        for(int j=0; j<n; j++){
        	
            if((text[j]>96) && (text[j]<123)){
            	
                result[k] = text [j];
                k++;
            }
        }

        result[k]= '\0';
        printf("Case #%d: %s\n", i+1, result);
    }
}

