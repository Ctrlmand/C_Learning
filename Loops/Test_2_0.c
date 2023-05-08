#include <stdio.h>
int main () 
{
    int n;
    int m;

    scanf ("%d %d", &n, &m);

    int x = 2;
    int sum = 0;
    int count = 0;
    int i;

    while ( count < m) {
        int isprime = 1;
        for ( i = 2; i < x; i++) {
            if ( x % i == 0) {
                isprime = 0;
            }
        }
        if ( isprime == 1) {
            count ++;
            if ( count <= m && count >= n) {
                sum += x;
            }
            printf ("x:%d, isprime:%d, count:%d \n", x, isprime, count);
        }
        x++;
    }
    printf ("\n%d \n",sum);
    return 0;
}