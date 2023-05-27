#include <stdio.h>
int main (void)
{
    const int maxNumber = 10;
    int isPrime[maxNumber];
    int x;
    int i;

    {
        printf ("\t\t");
        int i;
        for ( i=0; i<maxNumber; i++) {
            printf("%d\t", i);
        }
        printf ("\n");
    }

    for ( i=0; i<maxNumber; i++) {
        isPrime[i] = 1;
    }
    for ( x=2; x<maxNumber; x++) {
        if (isPrime[x]) {
            for ( i=2; i*x < maxNumber; i++) {
                isPrime[i*x] = 0;
            }
        }

        {
            printf ("x=%d\ti=%d\t", x, i);
            int i;
            for ( i=0; i<maxNumber; i++) {
                printf("%d\t",isPrime[i]);
            }
            printf ("\n");
        }

    }
    for ( i=2; i<maxNumber; i++) {
        if (isPrime[i]) {
            printf ("%d\t", i);
        }
    }
    printf ("\n");
    return 0;
}