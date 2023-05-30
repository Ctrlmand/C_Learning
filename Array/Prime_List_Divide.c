#include <stdio.h>
int isPrime( int x, int knowPrime[], int numberOfPrime);
int main(void) 
{
    const int number = 23;
    int Prime[23] = {2};
    int cnt = 1;
    int i = 3;
    int x;
    {
        printf ("\t\t");
        for (x=0; x<number; x++) {
            printf("%d\t",Prime[x]);
        }
        printf ("\n");
    }
    while (cnt < number) {
        if (isPrime(i, Prime, cnt)) {
            Prime[cnt++] = i;
        }
        {
            printf("i=%d\tcnt=%d", i, cnt);
            for (x=0; x<number; x++){
                printf ("%d\t", Prime[x]);
            }
            printf ("\n");
        }
        i++;
    }
    for (i=0; i<number; i++) {
        printf ("%d", Prime[i]);
        if ((i+1)%5 ==0)    printf("\t");
        else    printf ("\n");
    }
    return 0;
}
int isPrime( int x, int knowPrime[], int numberOfPrime) {
    int ret = 1;
    int i;
    for ( i=0; i<numberOfPrime; i++) {
        if (x % knowPrime[i] == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}