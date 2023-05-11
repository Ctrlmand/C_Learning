#include <stdio.h>

int isprime ( int i)
{
    int ret = 1;
    int k;
    for ( k=2; k<i; k++) {
        if ( i%k == 0) {
            ret = 0;
            printf ("%d Not Prime\n",i);
            break;
        }
    }
    return ret;
}

int main ()
{
    int m,n;
    int sum = 0;
    int cnt = 0;
    int i;

    //scanf ("%d %d", &m, &n);
    m=10, n=32;
    
    for ( i=m; i<=n; i++) {
        
        if ( isprime (i) ) {
            printf ("%d Is Prime\n", i);
            sum += i;
            cnt++;
        }
    }

    printf ("cnt:%d,sum:%d\n",cnt , sum);

    return 0;
}