#include <stdio.h>

int isPrime ( int n );
int main ()
{
    int x;
    //scanf ("%d", &x);
    x = 18;
    
    if (isPrime(x)) {
        printf ("%d = %d", x, x);

    } else {
        for ( int i=x; i>1; i--) {
            
            if ( isPrime(i) && x%i == 0) {
                while ( x%i ==0) {
                    printf ("%d",i);
                    x /= i;
                    if ( x > 1) {
                        printf ("x");
                    }
                }                                        
            } 
            
        }
            
    }
    return 0;
}

int isPrime ( int n )
{
    int ret = 1;
    int i;
    for ( i=2; i<n; i++) {
    if ( n%i == 0) {
        ret = 0;
        break;
    }
    }
    return ret;
}