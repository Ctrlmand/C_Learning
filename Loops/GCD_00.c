#include <stdio.h>
int main()
{
    int a, b;
    int min;
    int GCD;
    
    scanf("%d %d", &a, &b);
    
    if ( a < b ){
        min = a;
    } else {
        min = b;
    }
    
    int i;
    for( i = 1; i <= min; i++) {
        if ( a % i == 0) {
            if ( b % i == 0) {
                GCD = i;
            }
        }
    }

    printf ("%d", GCD);

    return 0;
}