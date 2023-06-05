#include <stdio.h>
int isPrime( int x, int knowPrime[], int numberOfPrime);
int main(void)
{
    const int number = 10;
    int prime[10] = {2};
    int i = 3;
    int cnt = 1;
    
    {
            
    }

    while ( cnt < number) {
        if (isPrime( i, prime, cnt)) {
            prime[cnt++] = i;
        }
        i++;
    }
    for ( i=0; i<number; i++) {
        printf ("%d", prime[i]);
        if ((i+1) % 5) {
            printf ("\t");
        } else {
            printf ("\n");
        }
    }

    return 0;
}
int isPrime( int x, int knowPrime[], int numberOfPrime) {
    int ret = 1;
    int i;
    for ( i=0; i<numberOfPrime; i++) {
        if ( x % knowPrime[i] == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}