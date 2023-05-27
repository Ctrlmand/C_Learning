//储存素数
#include <stdio.h>
int isPrime (int x, int knowPrimes[], int noumberOfPrime);
int main () 
{
    const int number = 10;
    int prime[10] = {2};
    int count = 1;
    int i = 3;

    {
        printf ("\t\t\t");
        int i;
        for ( i=0; i<number; i++) {
            printf ("%d\t",i);
        }
        printf ("\n");
    }

    while (count < number) {
        if (isPrime( i, prime, count)) {
            prime[count++] = i;
        }

        {
        printf ("i=%d\tcnt=%d\t\t", i, count);
        int i;
        for ( i=0; i<number; i++) {
            printf ("%d\t", prime[i]);
        }
        printf ("\n\n");
        }

        i++;
    }
   
    for ( i=0; i<number; i++) {
        printf ("%d", prime[i]);
        if ( (i+1) % 5) printf ("\t");
        else    printf ("\n"); 
    }

    return 0;
}
int isPrime (int x, int knowPrimes[], int noumberOfPrime)
{
    int ret = 1;
    int i;
    for ( i=0; i<noumberOfPrime; i++) {
        if ( x%knowPrimes[i] == 0) {
            ret = 0;
        }
    }
    return ret;
}