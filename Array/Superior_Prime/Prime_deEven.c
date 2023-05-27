//去偶数判断
#include <stdio.h>
#include <math.h>
int isPrime ( int x);
int main ()
{
    int x;
    scanf ("%d", &x);
    if (isPrime(x)) {
        printf ("is");
    } else {
        printf ("not");
    }
    return 0;
}
int isPrime (int x) 
{
    int ret = 1;
    int i;
    if ( x == 1 || 
        (x%2 == 0 && x!=2)) {
            ret = 0;
    }
    for ( i=3; i<sqrt(x); i+=2) {
        if ( x%i == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}