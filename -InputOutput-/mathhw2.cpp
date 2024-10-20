#include <stdio.h>

int main()
{
	long int A;
	long int B;
	long int C;
	long int D;
	
	scanf("(%ld+%ld)x(%ld-%ld)\n",&A, &B, &C, &D);
	long int result1 = (A+B)*(C-D);
	
	scanf("(%ld+%ld)x(%ld-%ld)\n",&A, &B, &C, &D);
	long int result2 = (A+B)*(C-D);
	
	scanf("(%ld+%ld)x(%ld-%ld)",&A, &B, &C, &D);
	long int result3 = (A+B)*(C-D);
	
	printf("%ld %ld %ld\n", result1, result2, result3);
	return 0;
}
