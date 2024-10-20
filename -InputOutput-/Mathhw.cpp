#include <stdio.h>

int main()
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int k;
int l;

scanf("(%d+%d)x(%d-%d)\n(%d+%d)x(%d-%d)\n(%d+%d)x(%d-%d)"
,&a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

int result1 = (a+b)*(c-d);

int result2 = (e+f)*(g-h);

int result3 = (i+j)*(k-l);

printf("%d %d %d\n", result1, result2, result3);


}
