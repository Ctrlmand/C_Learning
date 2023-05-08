#include <stdio.h>
int main ()
{
    int m,n;
    int sum = 0;
    int cnt = 0;
    int i;

    //scanf ("%d %d", &m, &n);
    m=10, n=32;
    
    for ( i=m; i<=n; i++) {
        int isprime = 1;
        int k;
        for ( k=2; k<i; k++) {
            if ( i % k == 0) {
                isprime = 0;
                break;
            }
        }
        if ( isprime) {
            printf ("Prime:%d\n", i);
            sum += i;
            cnt++;
        }
    }

    printf ("cnt:%d,sum:%d\n",cnt , sum);

    return 0;
}