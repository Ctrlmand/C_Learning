#include <stdio.h>
int main () 
{
    int x = 1;
    int t = 1;
    int mask = 1;

    scanf ("%d",&x);
    t = x;

    while ( t > 9) {
        mask *= 10;
        t /= 10;
    }
    int d = 0;
    do {
        d = x / mask;
        printf ("%d", d);
        if( mask > 9) {
            printf (" ");
        }
        x %= mask;
        mask /= 10;
    } while ( mask > 0) ;

    printf ("\n");

    return 0;
}