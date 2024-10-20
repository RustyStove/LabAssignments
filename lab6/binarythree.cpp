#include<stdio.h>

	int main(){
 		int T;
 		scanf("%d",&T);
 
 		for(int i=0; i<T; i++){
		  int N=0;
		  scanf("%d" ,&N);
		  int a[N];
		  for(int j=0; j<N; j++){
		   scanf("%d" ,&a[j]);
		  }

			int A=0,B=0;
  
  			for(int k=0; k<N-1; k++){

	   			for(int l=k+1; l<N; l++){
					int x=0;
				    int temp =a[k]^a[l];
				    while(temp){
				     if(temp & 1){
				      x++;
				     }
				     temp >>= 1;
				    }
				    if(x>=3){
				    A++;
				    }else if(x<3){
				    B++;
	    			}
	   			}
	   
	  		}
  		printf("Case #%d: %d %d\n" ,i+1, A, B);
 	}	
 return 0;
}
