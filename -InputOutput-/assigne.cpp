#include <stdio.h>

int main()
{
	int T;
	int A;
	int B;
	
	scanf("%d\n%d %d\n",&T, &A, &B);
	float C = 360.00/A;
	float result1 = B/C;
	
	scanf("%d %d\n", &A, &B);
	C = 360.00/A;
	float result2 = B/C;
	
	scanf("%d %d", &A, &B);
	C = 360.00/A;
	float result3 = B/C;
	
	printf("%.2f \n%.2f \n%.2f \n", result1, result2, result3);
	
	return 0;

}

