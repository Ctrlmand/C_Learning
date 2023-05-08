#include <stdio.h>
int main()
{
    int x;

    scanf("%d", &x);

    int fact = 1;

    // while ( i <= x) {
    //     fact *= i;
    //     i++;
    // }

    // for ( int i=1; i <= x; i++)
    // {
    //     fact *= i;
    // }
    
    // for ( int i=2; i<=x; i++) {
    //     fact *= i;
    // }

    int i = x;
    for ( i=i; i>1; i--){
        fact *= i;
    }

    printf("%d", fact);
    return 0;
}