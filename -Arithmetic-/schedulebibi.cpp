#include <stdio.h>


int main()
{

    char cc1[100],cc2[100],cc3[100],cc4[100],cc5[100];
    long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u;

    scanf("%s %02ld:%02ld-%02ld:%02ld\n%s %02ld:%02ld-%02ld:%02ld\n%s %02ld:%02ld-%02ld:%02ld\n%s %02ld:%02ld-%02ld:%02ld\n%s %02ld:%02ld-%02ld:%02ld",
    cc1, &a, &b, &c, &d,
    cc2, &e, &f, &g, &h,
    cc3, &i, &j, &k, &l,
    cc4, &m, &n, &o, &p,
    cc5, &q, &r, &s, &t);

    a -= 1;
    c -= 1;
    e -= 1;
    g -= 1;
    i -= 1;
    k -= 1;
    m -= 1;
    o -= 1;
    q -= 1;
    s -= 1;

    printf("%s %02ld:%02ld-%02ld:%02ld\n%s %02ld:%02ld-%02ld:%02ld\n%s %02ld:%02ld-%02ld:%02ld\n%s %02ld:%02ld-%02ld:%02ld\n%s %02ld:%02ld-%02ld:%02ld\n",
    cc1, a, b, c, d,
    cc2, e, f, g, h,
    cc3, i, j, k, l,
    cc4, m, n, o, p,
    cc5, q, r, s, t);

    return 0;
    
}
