#include <stdio.h>
int main ()
{
    int x ;
    //x = 35458;
    scanf ("%d", &x);

    int mask = 1;

    if ( x < 0 ) {
        printf ("fu ");
        x *= -1;
    }
    
    int t = x;
    while ( t > 9 ) {
        mask *= 10;
        t /= 10;
        //printf ("mask:%d\n", mask);
    } 

    int d;
    do {
    d = x / mask;
    x %= mask;
   
    switch ( d ) {
    case 0 :
        printf ("ling");
        break;
    case 1 :
        printf ("yi");
        break;
    case 2 :
        printf ("er");
        break;
    case 3 :
        printf ("san");
        break;
    case 4 :
        printf ("si");
        break;
    case 5 :
        printf ("wu");
        break;
    case 6 :
        printf ("liu");
        break;
    case 7 :
        printf ("qi");
        break;
    case 8 :
        printf ("ba");
        break;
        case 9 :
        printf ("jiu");
        break;
    }
    //printf ("d:%d,x:%d\n", d, x);
    if ( mask > 9) {
        printf (" ");
    }
    
    mask /= 10;
    } while ( mask > 0 );

    return 0;
}