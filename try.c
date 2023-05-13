#include <stdio.h>
int main()
{
   for ( int i =2; i<100; i++) {
    int isPrime = 1;
        for ( int k = 2; k<i; k++) {
            if ( i%k == 0) {
                isPrime = 0;
                break;
            }
        }
    if (isPrime == 1) {
        printf ("%d\n", i);
    }
   }
    return 0;
}