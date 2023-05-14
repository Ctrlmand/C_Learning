#include <stdio.h>
int isPerfect (int x);

int main ()
{
    int m, n;
    m=1;
    n=100;
    //scanf ("%d %d", &m, &n);
    
    for (int i=m; i<=n; i++) {
        if(isPerfect(i)) {
            printf ("%d",i);
            if ( i!= n) {
                printf (" ");
            }
        }
        if (i == n){
            printf ("\n");
        } 
    }
    
    return 0;
}

int isPerfect ( int x)
{
    int ret = 0;
    int sum = 0;
    for (int i=1; i<x; i++) {
        if ( x%i == 0) {
            sum += i;
        }
    }
    if ( sum == x) {
        ret = 1;
    }

    return ret;
}